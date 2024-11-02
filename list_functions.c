/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:50:48 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/01 21:23:52 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

n_list	*lstnewnum(int content)
{
	n_list *node;
	node = malloc(sizeof(n_list));
	if (!node)
		exit(1);
	node->content = content;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void	lstadd_back_num(n_list	**nums, n_list *node)
{
	if (*nums == NULL)
	{
		*nums = node;
		return ;
	}
	n_list *temp;

	temp = *nums;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
}
