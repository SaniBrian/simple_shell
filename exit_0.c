#include "shell.h"

/**
*exit_0 - exit handler
*@args: args vector
*@prog: program name
*Return: void
*/

void exit_0(char **args, char *prog)
{
	(void)prog;

	ffree(args);
	exit(0);
}
