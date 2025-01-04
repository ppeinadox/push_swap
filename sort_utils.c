/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:21:03 by ppeinado          #+#    #+#             */
/*   Updated: 2024/12/19 17:45:29 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(n_list *stack_a)
{
	n_list *temp;

	temp = stack_a;
	while (temp->next != NULL)
	{
		if (temp->content > temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void    sort(n_list **stack_a, n_list **stack_b)
{
        int len;
	
	len = count_nodes(*stack_a);
	/*if (is_sorted(*stack_a) == 1)
        {
                free(*array);
                //free_stack(stack_a);
        }*/
	if (len <= 5)
		short_sort(stack_a);
	else
		big_sort(stack_a, stack_b);
}

