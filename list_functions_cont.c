/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions_cont.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:40:40 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/23 18:20:46 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

n_list	*looking_for_value(n_list *stack, int pos)
{
	int	i;
	n_list	*temp;

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
