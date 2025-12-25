#include "push_swap.h"

s_stack *stack_new(int nb)
{
  s_stack *result;
  s_stack *n;

  result = malloc(sizeof(s_stack));
  if (!result)
    return (NULL);
  n = result;
  n->nb = nb;
  n->next = NULL;
  return(result);
}

s_stack *stack_last(s_stack *stack)
{
  if (!stack)
    return (stack);
  while(stack->next)
    stack = stack->next;
  return (stack);
}

void stack_add_back(s_stack **stack, s_stack *new)
{
  if (*stack)
    stack_last(*stack)->next = new;
  else
    *stack = new;
}
