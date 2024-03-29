#include "monty.h"

/**
 * stack_freer - frees the stack
 * @h: head pointer pointing to the frst node in the stack
*/
void stack_freer(stack_t *h)
{
	stack_t *temp;

	temp = h;

	while (h != NULL)
	{
		h = (h)->next;
		free(temp);
		temp = h;
	}
}
