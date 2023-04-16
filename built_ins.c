#include "shell.h"

int cd(char  *program_path)
{
    if (program_path == NULL)
        program_path = "/";     
    return (chdir(program_path));
}

int exit_shell(int status)
{
    exit(status);
}