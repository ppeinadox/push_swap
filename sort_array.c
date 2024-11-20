/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:35:17 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/07 16:28:16 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*add_to_array(n_list *nums)
{
	int	c;
	int	*array;
	int	i;

	c = count_nodes(nums);
	array = malloc(sizeof(int) * c); //Proteger esta memoria
	i = 0;
	if (!array)
		return (NULL);
	while(nums)
	{
		array[i] = nums->content;
		nums = nums->next;
		i++;
	}
	quick_sort(array, 0, c - 1);
	return (array);
}

void	quick_sort(int *array, int init, int end)
{
	int	pivote;
	int	aux;
	int	right;
	int	left;

	left = init;
	right = end;
	pivote = array[(init + end)/2];
	while (left <= right)
	{
		while(array[left] < pivote && left < end)
			left++;
		while (array[right] > pivote && right > init)
			right--;
		if (left <= right)
		{
			aux = array[left];
			array[left] = array[right];
			array[right] = aux;
			left++;
			right--;
		}
	}
	if (init <= right)
		quick_sort(array, init, right);	
	if (end > left) 
		quick_sort (array, left, end);
}
