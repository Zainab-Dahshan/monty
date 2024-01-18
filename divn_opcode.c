#include "monty.h"

/**
 * f_div - a function that divides the second top element
 * of the stack by the top element of the stack
 * @head: The stack head
 * @counter: line_number
 */
void f_div(stack_t **head, unsigned int counter)
{
int div, nodes;
stack_t *aux;
aux = *head;

for (nodes = 0; aux != NULL; nodes++)
	aux = aux->next;
if (nodes < 2)
{
fprintf(stderr, "L%d: can't div, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
aux = *head;
if (aux->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
div = aux->next->n / aux->n;
aux->next->n = div;
*head = aux->next;
free(aux);
}
