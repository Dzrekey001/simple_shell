#ifndef _SHELL_H_
#define _SHELL_H_
#define MAX_LINE_LENGHT 64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>

extern char **environ;

void shell_prompt(void);
void free_me(char **ptr);
char *check_env_path();
char **read_line();
char **get_arguments(char *str);
void execute_command(char *program_path, char **program_arg);

/*Utils*/
char *concatenate_format(char *str1, char *str2);


/*builtins*/
int cd(char  *program_path);
int check_builtins(char **commands);
int exit_shell(int status);
#endif
