#include "monty.h"

/**
 * push - Pushes an element onto the stack
 * @stack: Double pointer to the stack
 * @n: Integer to push onto the stack
 */
int push(int *stack, int line_number, char *argument)
{
int value;

if (argument == NULL)
{
printf("L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}

value = atoi(argument);
stack[line_number] = value;

return (0);
}
