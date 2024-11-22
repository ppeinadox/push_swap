/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:29:34 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/22 19:22:06 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int min_index(n_list *stack)
{
	n_list	*temp;
	int	min;

	temp = stack;

	min = temp->index;
	while(temp->next != NULL)
	{
		if (min > temp->index)
			min = temp->index;
		temp = temp->next;
	}
	return (min);
}
void	tiny_sort(n_list **stack_a)
{
	int	max;

	max = max_list(*stack_a);
	if ((*stack_a)->content == max)
		rotate_a(stack_a);
	else if ((*stack_a)->next->content == max)
		reverse_rotate_a(stack_a);
	if ((*stack_a)->content > (*stack_a)->next->content)
		swap_a(stack_a);
}

int	main(void)
{
	n_list	*stack;
	n_list	*one = lstnewnum(7);
	n_list	*two = lstnewnum(5);
	n_list	*three = lstnewnum(4);

	stack = NULL;
	lstadd_back_num(&stack, one);
	lstadd_back_num(&stack, two);	
	lstadd_back_num(&stack, three);
	tiny_sort(&stack);
	while (stack != NULL)
	{
		printf("%d\n",stack->content);
		stack = stack->next;
	}
}
