Simple Shell
This project aims to develop a user-friendly shell that allows users to interact with a Unix-based operating system. The shell is implemented in a high-level programming language and designed with a user interface to make it easy to use.

Features
The following features have been implemented in the Simple Shell:

Simple shell 0.1: A UNIX command line interpreter.
Simple shell 0.2: Handle command lines with arguments.
Simple shell 0.3: Handle the PATH. Fork must not be called if the command doesn’t exist.
Simple shell 0.4: Implement the exit built-in, which exits the shell. Usage: exit. No need to handle any argument to the built-in exit.
Simple shell 1.0: Implement the env built-in, which prints the current environment.
Simple shell 0.1.1: Write your own getline function. Use a buffer to read many chars at once and call the least possible the read system call. You will need to use static variables. You are not allowed to use getline. You don’t have to be able to move the cursor.
Simple shell 0.2.1: You are not allowed to use strtok.
Simple shell 0.4.1: Handle arguments for the built-in exit. Usage: exit status, where status is an integer used to exit the shell.
Setenv, unsetenv: Implement the setenv and unsetenv builtin commands. setenv initializes a new environment variable, or modifies an existing one. Command syntax: setenv VARIABLE VALUE. Should print something on stderr on failure. unsetenv removes an environment variable. Command syntax: unsetenv VARIABLE. Should print something on stderr on failure.
cd: Implement the builtin command cd. Changes the current directory of the process. Command syntax: cd [DIRECTORY]. If no argument is given to cd the command must be interpreted like cd $HOME. You have to handle the command cd -. You have to update the environment variable PWD when you change directory. Man chdir, man getcwd.
Commands separator ; && and ||: Handle the commands separator ; && and || shell logical operators.
alias: Implement the alias builtin command. Usage: alias [name[='value'] ...]. alias: Prints a list of all aliases, one per line, in the form name='value'. alias name [name2 ...]: Prints the aliases name, name2, etc., one per line, in the form name='value'. alias name='value' [...]: Defines an alias for each name whose value is given. If name is already an alias, replaces its value with value.
Variables: Handle variables replacement. Handle the $ variable.
Comments: Handle comments (#).
File as input: Usage: simple_shell [filename]. Your shell can take a file as a command line argument. The file contains all the commands that your shell should run before exiting. The file should contain one command per line. In this mode, the shell should not print a prompt and should not read from stdin.
Usage
To use the Simple Shell, follow the steps below:

Clone the repository or download the source code.
Compile the program using the command: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh.
Run the shell using the command: ./hsh.
To run a command from a file, use the command: ./hsh filename.

Contact
If you have any questions or suggestions about this project, please contact us at:
Daniel Kwasi Dzrkey <dkdzrkey001gmail.com> 
AkpanElizabeth <@ugorjielleza>

We appreciate your feedback!
