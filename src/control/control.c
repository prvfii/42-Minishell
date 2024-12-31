/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/10/16 14:24:57 by fimazouz          #+#    #+#             */
/*   Updated: 2024/10/16 14:24:57 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	control_c(int sig)
{
	t_shelly	*shelly;

	(void)sig;
	shelly = get_shelly();
	if (shelly->process_running == 1)
		shelly->exit_code = 130;
	else
	{
		shelly->exit_code = 1;
		rl_on_new_line();
	}
	printf("\n");
	rl_replace_line("", 0);
	rl_redisplay();
}

void	control_d(void)
{
	printf("MINISHELL> exit\n");
	exit(0);
}

void	control_s(int sig)
{
	t_shelly	*shelly;

	(void)sig;
	shelly = get_shelly();
	if (shelly->process_running == 1)
	{
		shelly->exit_code = 131;
		printf("Quit: 3\n");
	}
	else
		shelly->exit_code = 0;
	rl_redisplay();
}

void	control(void)
{
	struct termios	term;

	signal(SIGQUIT, control_s);
	signal(SIGINT, control_c);
	tcgetattr(0, &term);
	term.c_lflag &= ~ECHOCTL;
	tcsetattr(0, TCSANOW, &term);
}
