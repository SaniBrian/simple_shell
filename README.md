Simple Shell project 0x16.c - hsh -
This is a simple UNIX command interpreter based on bash and Sh.

Overview
hsh is a sh-compatible command language interpreter that executes commands read
from the standard input or from a file.

Environment:
compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

Test mode:
Interactive mdoe
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$

Non-interactive mode:
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$