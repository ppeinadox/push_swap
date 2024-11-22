/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:50:48 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/22 17:40:24 by ppeinado         ###   ########.fr       */
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

int	count_nodes(n_list *nums)
{
	int c;

	c = 0;
	while (nums)
	{
		c++;
		nums = nums->next;
	}
	return (c);
}

void	index_list(n_list **nums, int *array)
{
	n_list *temp;
	int i;
	
	temp = *nums;
	i = 0;
	while (temp)
	{
		if(temp->content == array[i])
		{
			temp->index = i;
			temp = temp->next;
			i = 0;
		}
		else
			i++;
	}
}

int	max_list(n_list *stack)
{
	int max;

	if(stack == NULL)
		return (-1);
	max = stack->content;
	while (stack != NULL)
	{
		if (stack->content > max)
			max = stack->content;
		stack = stack->next;
	}
	return (max);
}
