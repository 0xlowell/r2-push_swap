/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzima <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:38:28 by lzima             #+#    #+#             */
/*   Updated: 2022/04/02 18:25:31 by lzima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_mem	*error_check(int ac, char **av, t_mem *mem)
{
	t_mem	*atoi;

	digit_error(ac, av);
	atoi = atoi_args(ac, av, mem);
	double_error(atoi);
	return (atoi);
}

void    init_stack(t_list *stack, int ac, char **av)
{
    stack->a.size = 0;
    stack->a.name = 'a';
    stack->a.sorted = NULL;
    indexation(error_check(ac, av, &stack->a), &stack->a);
    is_sorted(&stack->a);
    stack->b.sorted = malloc(stack->a.size * sizeof(int));
    stack->b.name = 'b';
}

int	main(int ac, char **av)
{
	t_list	stack;
	int		i;

    init_stack(&stack, ac, av);
	i = 0;
	while (stack.a.size > i)
	{
		stack.b.sorted[i] = -1;
		i++;
	}
	stack.b.size = 0;
	if (stack.a.size == 3)
		algo_3(&stack.a);
	if (stack.a.size == 4)
		algo(&stack.a, &stack.b);
	if (stack.a.size == 5)
		algo_5(&stack.a, &stack.b);
	if (stack.a.size >= 6)
		algo(&stack.a, &stack.b);
    free(stack.a.sorted);
    free(stack.b.sorted);
}
