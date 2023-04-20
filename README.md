**Simple Shell**
***
This project aims to develop a user-friendly shell that allows users to interact with a Unix-based operating system. 

The shell is implemented in a high-level programming language and designed with a user interface to make it easy to use.

***

**Features**
***
The following features have been implemented in the Simple Shell:

**Simple shell 0.1**: A UNIX command line interpreter.

**Simple shell 0.2**: Handle command lines with arguments.

Simple shell 0.4: Implement the exit built-in, which exits the shell. 

**Usage**: exit. 

**Simple shell 1.0**: Implement the env built-in, which prints the current environment.

**Simple shell 0.4.1**: Handle arguments for the built-in exit.

**Usage**: exit status, where status is an integer used to exit the shell.
Setenv, unsetenv: Implement the setenv and unsetenv builtin commands.

setenv initializes a new environment variable, or modifies an existing one. 
**Command syntax**: setenv VARIABLE VALUE. 

cd: Implement the builtin command cd. Changes the current directory of the process.
Command syntax: cd [DIRECTORY]. If no argument is given to cd the command must be interpreted like cd $HOME. 
You have to handle the command cd -. 

**alias**: Implement the alias builtin command. 
Usage: alias [name[='value'] ...]. 
alias: Prints a list of all aliases, one per line, in the form name='value'.
alias name [name2 ...]: Prints the aliases name, name2, etc., one per line, in the form name='value'.
alias name='value' [...]: Defines an alias for each name whose value is given. 

**Comments**: Handle comments (#).
File as input: Usage: 
simple_shell [filename]. 

***

**To use the Simple Shell, follow the steps below:**

1. Clone the repository or download the source code.
2. Compile the program using the command: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh.
3. Run the shell using the command: ./hsh.
4. To run a command from a file, use the command: ./hsh filename.

***

**Author**
***
This repository was created as part of coursework for the ALX Software Engineering program.

Daniel Kwasi Dzrkey <dkdzrkey001@gmail.com>

AkpanElizabeth <https://twitter.com/@ugorjielleza>

