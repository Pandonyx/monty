#include "monty.h"
/**
 * main - Entry point for the Monty interpreter
 * Return: 0 on success
 */
int main(void)
{
int stack[100];
int line_number = 1;

push(stack, line_number++, "1");
push(stack, line_number++, "2");
push(stack, line_number++, "3");

pall(stack, line_number);

return (0);
}
