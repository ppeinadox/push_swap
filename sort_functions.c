/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:29:34 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/20 17:04:39 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap"

int min_index(n_list *stack)
{
	n_list	temp;
	int	min;

	temp = stack;
	min = temp->index;
	while(temp->next != NULL)
	{
		if (min > temp->index)
			min = temp->index;
		temp = temp->next;
	}
}
void	tiny_sort(n_list **stack_a, len)
{
	int	min_index;
	int	r;

	if (is_sorted(*stack_a))
		return ;
	min_index = get_min_index
}
