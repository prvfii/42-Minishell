𝑴𝒊𝒏𝒊𝒔𝒉𝒆𝒍𝒍

    A simplified shell implementation, your first step toward mastering system-level programming.

____________________________________________________________________________________________________

Description

Minishell is a project from the 42 School curriculum. The goal is to implement a simple UNIX shell that mimics basic behaviors of popular shells like bash or zsh. It provides a deeper understanding of system calls, process management, and command execution in a Linux/UNIX environment.

This project challenges you to manage multiple components, such as parsing, executing commands, handling environment variables, and implementing redirections.

Features

	•	Prompt Display: Displays a customizable prompt for the user.
	•	Built-in Commands:
	•	cd: Change the current directory.
	•	echo: Print text to the terminal.
	•	pwd: Display the current working directory.
	•	export: Add or modify environment variables.
	•	unset: Remove environment variables.
	•	env: Display all environment variables.
	•	exit: Exit the shell.
	•	Command Execution: Executes external commands using execve.
	•	Redirections:
	•	Input (<).
	•	Output (>).
	•	Append (>>).
	•	Pipes: Support for piping commands (|).
	•	Environment Variables: Handles $VARIABLE expansion.
	•	Signal Handling: Properly handles signals like Ctrl+C, Ctrl+D, and Ctrl+\.

Requirements

	•	Language: C.
	•	Libraries: Standard C library and readline.
	•	OS: macOS.
