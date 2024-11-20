/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:42:09 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/16 13:57:25 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdio.h>

void ft_free_split(char **array)
{
	int i;

	i = 0;
	while (array[i++] != NULL)
		free(array[i]);
	free (array);
}

int ft_strcmp (const char *str1, const char *str2)
{
	while (*str1)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		if (*str1 != *str2)
			return (1);
	}
	return (0);
}
int check_duplicates(int number, n_list **nums)
{
	n_list *temp;
	temp = *nums;
	while (temp)
	{
		if (temp->content == number)
			return (1);
		temp = temp->next;
	}
	return (0);
}
int check_int (char **array, n_list **nums)
{
	int i;
	n_list *node;
	int r;

	i = 0;
	while (array[i])
	{
		if(ft_strcmp(array[i], "0") == 0)
		{
			if (check_duplicates(0, nums) == 1)
				return (1);
			r = 0;
			node = lstnewnum(r);
			if (!node)
				return(1);
                        lstadd_back_num(nums, node);
		}
		else if ((ft_atoi(array[i])) == 0 || (ft_atoi(array[i])) < -2147483648
			       	|| (ft_atoi(array[i])) > 2147483647)
			return (1);
		else
		{	
			if (check_duplicates((ft_atoi(array[i])), nums) == 1)
				return (1);
			r = ft_atoi(array[i]);
			node = lstnewnum(r);
			if (!node)
				return (1);
			lstadd_back_num(nums, node);
		}
		i++;
	}
	return (0);
}

int process_format (int argc, char **argv, n_list **nums)
{
	int i;
	char **arr;

	i = 1;
	while (i < argc)
	{
		arr = ft_split(argv[i], ' ');
		if (check_int(arr, nums) != 0)
			return (ft_free_split(arr), 1);
		ft_free_split(arr);
		i++;
	}
	return (0);

}

int main (int argc, char **argv)
{
	n_list	*nums = NULL;
	int	*array;
	n_list	*stack_b = NULL;

	if (process_format(argc, argv, &nums) != 0)
	{	
		printf("ERROR\n");
		return (1);
	}
	array = add_to_array(nums);
	index_list(&nums, array);
	radix_sort(&nums, &stack_b);
	n_list *temp = nums;
	while (temp != NULL)
	{
		printf("Número: %d\nÍndice%d\n", temp->content, temp->index);
		temp = temp->next;
	}
	while (*array)
	{
		printf("Array: %d\n", *array);
		array++;
	}
	temp = nums;
    	while (temp != NULL)
	{
		n_list *next = temp->next;
		free(temp);
		temp = next;
	}
	return 0;
}
