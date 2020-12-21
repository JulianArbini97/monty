#include "monty.h"
var_1 vari;

void push(stack_t **stack, unsigned int line_number)
{
    stack_t *new;
    char *num = vari.num;


    (void) line_number;
    new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        f_list(vari.mystack);
        fclose(vari.fil);
        exit(EXIT_FAILURE);
    }

    if (*num >= 48 && *num <= 57)
    {
    new->n = atoi(num);
    if (atoi(num) == 0 && *num != 48)
    {
	    fprintf(stderr,"L%d: usage: push integer\n", vari.line_number);
	    fclose(vari.fil);
	    f_list(vari.mystack);
	    free(new);
	    exit(EXIT_FAILURE);
    }
    new->next = (*stack);
    new->prev = NULL;
    if ((*stack) != NULL)
        (*stack)->prev = new;
    (*stack) = new;
    }
    else
    {
        fprintf(stderr,"L%d: usage: push integer\n", vari.line_number);
                 fclose(vari.fil);
		 f_list(vari.mystack);
		 free(new);
		 exit(EXIT_FAILURE);
    }
}
