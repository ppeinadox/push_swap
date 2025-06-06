/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:28:15 by ppeinado          #+#    #+#             */
/*   Updated: 2025/05/02 13:28:09 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big_sort(t_list_push **stack_a, t_list_push **stack_b)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	len = count_nodes(*stack_a);
	while (!is_sorted(*stack_a))
	{
		j = 0;
		while (j < len)
		{
			if ((((*stack_a)->index >> i) & 1) == 0)
				push_b(stack_a, stack_b);
			else
				rotate_a(stack_a);
			j++;
		}
		while (*stack_b)
			push_a(stack_a, stack_b);
		i++;
	}
}

int	index_max(t_list_push *stack)
{
	int			max_i;
	int			max_val;
	t_list_push	*temp;

	max_i = 0;
	max_val = max_list(&(*stack));
	temp = stack;
	while (temp != NULL)
	{
		if (temp->content == max_val)
			return (max_i);
		else
		{
			max_i++;
			temp = temp->next;
		}
	}
	return (-1);
}

void	stack_in_order(t_list_push **stack_a, t_list_push **stack_b)
{
	while ((*stack_b)->content != max_list(*stack_b))
	{
		if (index_max(*stack_b) <= count_nodes(*stack_b) / 2)
			rotate_b(stack_b);
		else
			reverse_rotate_b(stack_b);
	}
	tiny_sort(stack_a);
}

void	join(t_list_push **stack_a, t_list_push **stack_b)
{
	t_list_push	*pointer;
	int			i;

	i = 3;
	pointer = looking_for_value(*stack_a, count_nodes(*stack_a) - i);
	i--;
	while (count_nodes(pointer))
	{
		if (count_nodes(*stack_b) > 0
			&& (max_list(pointer) < max_list(*stack_b)))
			push_a(stack_a, stack_b);
		else
		{
			reverse_rotate_a(stack_a);
			pointer = looking_for_value(*stack_a, count_nodes(*stack_a) - i);
			i--;
		}
	}
	while (count_nodes(*stack_b) > 0)
		push_a(stack_a, stack_b);
}

/*
int main (void)
{
	t_list_push	*stack_a = NULL;
	t_list_push	*stack_b = NULL;
	t_list_push	*node_a;
	t_list_push	*node_b;
	int	array_a[3] = {1, 7, 9};
	int	array_b[5] = {2, 4, 6, 8, 10};
	int i = 0;

	while (i <= 2)
	{	
		node_a = lstnewnum(array_a[i++]);
		lstadd_back_num(&stack_a, node_a);
	}
	i = 0;
	while (i <= 4)
	{
		node_b = lstnewnum(array_b[i++]);
		lstadd_back_num(&stack_b, node_b);
	}
	join(&stack_a, &stack_b);
	while (stack_a != NULL)
	{
		printf("%i\n", stack_a->content);
		stack_a = stack_a->next;
	}	
}*/
