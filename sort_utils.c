/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:21:03 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/20 16:25:42 by ppeinado         ###   ########.fr       */
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
