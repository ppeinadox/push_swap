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
			return (1);
		temp = temp->next;
	}
	return (1);
}

void    sort(n_list *stack_a, n_list *stack_b, int *array, int len)
{
        if (is_sorted(stack_a) == 0)
        {
                free (array);
                //free_stack(stack_a);
        }
        else if (len == 2)
                swap_a(&stack_a);
        else if (len == 3)
                tiny_sort(&stack_a);
	else if (len <= 5)
		short_sort(&stack_a);
	else if (len > 5)
		big_sort();
}

