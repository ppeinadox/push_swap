/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions_cont.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:40:40 by ppeinado          #+#    #+#             */
/*   Updated: 2025/05/02 13:33:24 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_push	*looking_for_value(t_list_push *stack, int pos)
{
	int			i;
	t_list_push	*temp;

	i = 0;
	temp = stack;
	while (temp != NULL)
	{
		if (i == pos)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
