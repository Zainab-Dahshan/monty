#include "monty.h"
/**
 * f_add - a function that adds the top two
 * elements of the stack.
 * @head: The stack head
 * @counter: line_number
*/
void f_add(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
aux = h->n + h->next->n;
h->next->n = aux;
*head = h->next;
free(h);
}
