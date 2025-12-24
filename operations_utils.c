#include "push_swap.h"

void sa(s_stack **head)
{
  s_stack *temp;

  if ((*head)->next == NULL)
    return;
  temp = *head;
  *head = (*head)->next;
  temp->next = (*head)->next;
  (*head)->next = temp;
}

void sb(s_stack **head)
{
  sa(head);
}

void ss(s_stack **head_a, s_stack **head_b)
{
  sa(head_a);
  sb(head_b);
}

/*
int main(void)
{
  int nb_0 = 1;
  int nb_1 = 2;
  int nb_2 = 3;
  int nb_3 = 4;

  s_stack *stack_a = stack_new(nb_0);
  s_stack *next_a = stack_new(nb_1);
  s_stack *stack_b = stack_new(nb_2);
  s_stack *next_b = stack_new(nb_3);

  stack_add_back(&stack_a, next_a);
  stack_add_back(&stack_b, next_b);
  //sa(&stack_a);
  //sb(&stack_b);
  ss(&stack_a, &stack_b);

  while(stack_a != NULL)
  {
    printf("Nb: %i\n", stack_a->nb);
    stack_a = stack_a->next;
  }
  while(stack_b != NULL)
  {
    printf("Nb: %i\n", stack_b->nb);
    stack_b = stack_b->next;
  }
  free(stack_a);
  free(stack_b);
}
*/
