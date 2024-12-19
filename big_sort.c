/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:28:15 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/23 18:48:45 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int index_max(n_list *stack)
{
	int max_i;
	int max_val;
	n_list *temp;

	max_i = 0;
	max_val = max_list(&(*stack)); //revisar
	temp = stack;
	while (temp != NULL)
	{
		if (temp->content == max_val)
			return(max_i);
		else 
		{
			max_i++;
			temp = temp->next;
		}
	}
	return (-1);
}
void	stack_in_order(n_list **stack_a, n_list **stack_b)
{
	while((*stack_b)->content != max_list(*stack_b))
	{
		if (index_max(*stack_b) <= count_nodes(*stack_b) / 2)
			rotate_b(stack_b);
		else
			reverse_rotate_b(stack_b);
	}
	tiny_sort(stack_a);
}

void	join(n_list **stack_a, n_list **stack_b)
{
	n_list	*pointer;
	int	i;

	i = 3;
	pointer = looking_for_value(*stack_a, count_nodes(*stack_a)- i);
	i--;
	while (count_nodes(pointer))
	{
		if (count_nodes(*stack_b) > 0 && (max_list(pointer) < max_list(*stack_b)))
			push_a(stack_a, stack_b);
		else
		{
			reverse_rotate_a(stack_a);
			pointer = looking_for_value(*stack_a, count_nodes(*stack_a)- i);
			i--;
		}
	}
	while (count_nodes(*stack_b) > 0)
		push_a(stack_a, stack_b);

}

int main (void)
{
	n_list	*stack_a = NULL;
	n_list	*stack_b = NULL;
	n_list	*node_a;
	n_list	*node_b;
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

	
}
