#include "monty.h"
var_1 vari;
/**
 * pall - Prints All values on stack from top down
 * @stack: Struct stack_s as stack_t **ptr
 * @line_number: File line number
 * Return: Nothing (void)
 */

 void pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
    stack_t *temp = (*stack);

    while (temp != NULL)
    {
     printf("%d\n", temp->n);
     temp = temp->next;
    }
}
