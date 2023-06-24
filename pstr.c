#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
    stack_t *h;
    (void)counter;


    h = *head;
    if (h == NULL)
        return;
    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
}
#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
    stack_t *h;
    (void)counter;


    h = *head;
    while (h)
    {
        if (h->n > 127 || h->n <= 0)
        {
            break;
        }
        printf("%c", h->n);
        h = h->next;
    }
    printf("\n");
}
