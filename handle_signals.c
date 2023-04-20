#include "shell.h"
/**
 * handle_signals_C - handle signal interuptions
 * @signal_num: signal num for intepretation, whether EOF
 */
void handle_signals_C(int signal_num)
{
	(void)signal_num;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}

