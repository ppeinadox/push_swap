/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:50:48 by ppeinado          #+#    #+#             */
/*   Updated: 2025/05/02 13:32:21 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_push	*lstnewnum(int content)
{
	t_list_push	*node;

	node = malloc(sizeof(t_list_push));
	if (!node)
		exit(1);
	node->content = content;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void	lstadd_back_num(t_list_push	**nums, t_list_push *node)
{
	t_list_push	*temp;

	if (*nums == NULL)
	{
		*nums = node;
		return ;
	}
	temp = *nums;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
}

int	count_nodes(t_list_push *nums)
{
	int	c;

	c = 0;
	while (nums)
	{
		c++;
		nums = nums->next;
	}
	return (c);
}

void	index_list(t_list_push **nums, int *array)
{
	t_list_push	*temp;
	int			i;

	temp = *nums;
	i = 0;
	while (temp)
	{
		if (temp->content == array[i])
		{
			temp->index = i;
			temp = temp->next;
			i = 0;
		}
		else
			i++;
	}
}

int	max_list(t_list_push *stack)
{
	int	max;

	if (stack == NULL)
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
