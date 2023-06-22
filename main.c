#include "monty.h"

void initialize(Stack *stack)
{
stack->top = -1;
}

void push(Stack *stack, int element)
{
if (stack->top == STACK_SIZE - 1)
{
printf("Stack Overflow\n");
exit(EXIT_FAILURE);
}
stack->data[++stack->top] = element;
}

void pall(Stack *stack)
{
int i;

for (i = stack->top; i >= 0; i--)
{
printf("%d\n", stack->data[i]);
}
}

int main(void)
{
Stack stack;
char line[100];
int line_number = 1;
char opcode[10];
int arg;

FILE *file = fopen("bytecodes/00.m", "r");
if (file == NULL)
{
printf("Failed to open the file\n");
return (1);
}

initialize(&stack);

while (fgets(line, sizeof(line), file))
{
line[strcspn(line, "$\n")] = '\0';

if (sscanf(line, "%s %d", opcode, &arg) == 2)
{
if (strcmp(opcode, "push") == 0)
{
push(&stack, arg);
}
else
{
printf("Unknown opcode at line %d\n", line_number);
return (1);
}
}
else
{
if (strcmp(opcode, "pall") == 0)
{
pall(&stack);
}
else
{
printf("Unknown opcode at line %d\n", line_number);
return (1);
}
}

line_number++;
}

fclose(file);
return (0);
}
