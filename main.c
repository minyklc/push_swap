/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpple <minpple@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 22:58:23 by minpple           #+#    #+#             */
/*   Updated: 2026/01/06 10:34:41 by minpple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char	**args;
	t_stack	*array;

	if (argc > 1)
	{
		args = ft_parsing(argv);
		if (!args)
			return (1);
		array = split_to_stack(&args);
		if (is_it_sorted(array) == 0)
			return (destroy(&array), 0);
		ft_trindex(&array);
    ft_algocheck(&array, count_args(array));
	}
	return (0);
}

/* --- Main for operation functions --- */

/*
int main(void)
{
  int nb_0 = 1;
  int nb_1 = 2;
  int nb_2 = 3;
  int nb_3 = 4;

  t_stack *stack_a = stack_new(nb_0, 0);
  t_stack *next_a = stack_new(nb_1, 1);
  t_stack *stack_b = stack_new(nb_2, 2);
  t_stack *next_b = stack_new(nb_3, 3);

  stack_add_back(&stack_a, next_a);
  stack_add_back(&stack_b, next_b);

  //sa(&stack_a);
  //sb(&stack_b);
  //ss(&stack_a, &stack_b);
  pa(&stack_a, &stack_b);
  //pb(&stack_a, &stack_b);
  //ra(&stack_a);
  //rb(&stack_b);
  //rr(&stack_a, &stack_b);
  //rra(&stack_a);
  //rrb(&stack_b);
  //rrr(&stack_a, &stack_b);

  printf("Stack A:\n");
  stack_print(stack_a);

  printf("\n\nStack B:\n");
  stack_print(stack_b);

  destroy(&stack_a);
  destroy(&stack_b);
}
*/
