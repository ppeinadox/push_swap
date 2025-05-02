/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:35:17 by ppeinado          #+#    #+#             */
/*   Updated: 2025/05/02 15:52:01 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*add_to_array(t_list_push *nums)
{
	int	c;
	int	*array;
	int	i;

	c = count_nodes(nums);
	array = malloc(sizeof(int) * c);
	i = 0;
	if (!array)
		return (NULL);
	while (nums)
	{
		array[i] = nums->content;
		nums = nums->next;
		i++;
	}
	quick_sort(array, 0, c - 1);
	return (array);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	quick_sort(int *array, int init, int end)
{
	int	pivote;
	int	right;
	int	left;

	left = init;
	right = end;
	pivote = array[(init + end) / 2];
	while (left <= right)
	{
		while (array[left] < pivote && left < end)
			left++;
		while (array[right] > pivote && right > init)
			right--;
		if (left <= right)
			ft_swap(&array[left++], &array[right--]);
	}
	if (init <= right)
		quick_sort (array, init, right);
	if (end > left)
		quick_sort (array, left, end);
}
