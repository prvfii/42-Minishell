/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_builtin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:01:25 by firdawssema       #+#    #+#             */
/*   Updated: 2024/10/19 17:34:09 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_builtins(t_shelly *shelly, char *cmd, t_ast *ast)
{
	if (if_cd(cmd))
		return (ft_cd(ast->value, NULL, NULL, NULL), EXIT_SUCCESS);
	if (if_echo(cmd))
		return (ft_echo(ast->value), EXIT_SUCCESS);
	if (if_env(cmd))
		return (ft_env(shelly), EXIT_SUCCESS);
	if (if_exit(ast->value))
		return (ft_exit(ast->value), EXIT_SUCCESS);
	if (if_export(cmd))
		return (ft_export(shelly, ast->value), EXIT_SUCCESS);
	if (if_pwd(cmd))
		return (ft_pwd(ast->value), EXIT_SUCCESS);
	if (if_unset(cmd))
		return (ft_unset(&shelly->env, ast->value), EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
