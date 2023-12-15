#include "monty.h"
/**
 *op_push - add element to stack
 *@head: head of stack
 *@counter: line value
 *Return: no return
 */
void op_push(stack_t **head, unsigned int counter)
{
int a, k = 0, flag = 0;

if (bus.arg)
{
if (bus.arg[0] == '-')
k++;
for (; bus.arg[k] != '\0'; k++)
{
if (bus.arg[k] > 57 || bus.arg[k] < 48)
flag = 1;
}
if (flag == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
flcose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
}
else
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
flcose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
a = atoi(bus.arg);
if (bus.lifi == 0)
addnode(head, a);
else
addqueue(head, a);
}


/**
 * op_pall - to print stack
 * @head: head value of stack
 * @counter: no value
 * Return: no return value
 */
void op_pall(stack_t **head, unsigned int counter)
{
stack_t *e = *head;
(void)counter;

if (e == NULL)
return;
while (e)
{
printf("%d/n", e->n);
e = e->next;
}
}
