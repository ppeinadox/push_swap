/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:29:34 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/23 18:30:47 by ppeinado         ###   ########.fr       */
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

void	short_sort(n_list **stack_a)
{
	n_list	*stack_b;

	stack_b = NULL;
	if(count_nodes(*stack_a) == 2)
	{
		if((*stack_a)->content < (*stack_a)->next->content)
			swap_a(stack_a);
		return ;
	}
	if(count_nodes(*stack_a) == 3)
	{	
		tiny_sort(stack_a);
		return ;
	}
	while(count_nodes(*stack_a) > 3)
		push_b(&stack_b, stack_a);
	tiny_sort(stack_a);
	stack_in_order(stack_a, &stack_b);
	join(stack_a, &stack_b);
}
/*
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
}*/
