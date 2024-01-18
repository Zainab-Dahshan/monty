#include "monty.h"
/**
 * f_mul - a function that multiplies the top
 * two elements of the stack.
 * @head: The stack head
 * @counter: line_number
*/
void f_mul(stack_t **head, unsigned int counter)
{
int len = 0, aux;
stack_t *h;
h = *head;

while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
aux = h->next->n * h->n;
h->next->n = aux;
*head = h->next;
free(h);
}
