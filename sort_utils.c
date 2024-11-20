/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:21:03 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/20 17:19:57 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_shorted(n_list *stack a)
{
	n_list tmp;

	tmp = stack_a;
	while (tmp->next != NULL)
	{
		if (tmp->content > tmp->next->content)
			return (1);
		tmp = tmp->next;
	}
	return (1);
}

void    sort(n_list *stack_a, n_list *stack_b, int *array, int len)
{
        if (is_sorted(stack_a) == 0)
        {
                free (array);
                free_stack(stack_a);
        }
        else if (len == 2)
                swap_a(*stack_a);
        else if (len == 3)
                tiny_sort(stack_a, len);
}

