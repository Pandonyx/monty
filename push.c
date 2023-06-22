#include "monty.h"

/**
 * push - Pushes an element onto the stack
 * @stack: Double pointer to the stack
 * @line_number: Line number in the Monty byte code file
 * @argument: Argument for the push instruction (integer)
 *
 * Return: Always 0 (success)
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
