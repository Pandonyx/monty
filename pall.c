#include "monty.h"

/**
 * pall - Prints all the values on the stack
 * @stack: Double pointer to the stack
 * @line_number: Line number of the instruction
 */
void pall(int *stack, int line_number)
{
int i;

if (stack[line_number] == 0)
{
return;
}

for (i = line_number; i > 0; i--)
{
printf("%d\n", stack[i]);
}
}
