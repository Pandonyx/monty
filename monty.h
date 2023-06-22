#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
#include <errno.h>
#include <stdbool.h>

void pall(int *stack, int line_number);
int push(int *stack, int line_number, char *argument);

#endif /*MONTY_H*/