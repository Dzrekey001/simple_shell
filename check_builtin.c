#include "shell.h"

int check_builtins(char **commands)
{
    if (strcmp(commands[0], "cd") == 0)
    {
        if (cd(commands[1]) < 0)
            perror(commands[1]);
            return(1);  
    }
    if (strcmp(commands[0], "exit") == 0)
    {
        exit_shell(EXIT_SUCCESS);
        
    }

    return (0);
}