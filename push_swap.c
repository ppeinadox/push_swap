/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:42:09 by ppeinado          #+#    #+#             */
/*   Updated: 2024/12/19 17:45:24 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdio.h>

int	check_duplicates(int number, n_list **nums)
{
	n_list	*temp;

	temp = *nums;
	while (temp)
	{
		if (temp->content == number)
			return (1);
		temp = temp->next;
	}
	return (0);
}

int	check_int(char **array, n_list **nums)
{
	int	i;
	int	ret;
	int	r;

	i = 0;
	ret = 0;
	r = 0;
	while (array[i])
	{
		if (ft_strcmp(array[i], "0") == 0)
		{
			ret = add_node_list(array, nums, 0);
			if (ret != 0)
				return (1);
		}
		else if ((ft_atoi(array[i])) == 0
			|| (ft_atoi(array[i])) < -2147483648 || (ft_atoi(array[i])) > 2147483647)
			return (1);
		else
		{
			r = ft_atoi(array[i]);
			ret = add_node_list(array, nums, r);
			if (ret != 0)
				return (1);
		}
		i++;
	}
	return (0);
}

int	add_node_list(char **array, n_list **nums, int r)
{
	n_list	*node;

	if (check_duplicates(r, nums) == 1)
		return (1);
	node = lstnewnum(r);
	if (!node)
		return (1);
	lstadd_back_num(nums, node);
	return (0);
}

int	process_format(int argc, char **argv, n_list **nums)
{
	int		i;
	char	**arr;

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

int	main(int argc, char **argv)
{
	n_list	*stack_a = NULL;
	int *array;
	n_list	*stack_b = NULL;

	if (argc < 2)
		return ((1), write (1, "\n", 1));
	if (process_format(argc, argv, &stack_a) != 0)
	{	
		printf("ERROR\n");
		return (1);
	}
	array = add_to_array(stack_a);
	index_list(&stack_a, array);
	sort(&stack_a, &stack_b, &array);
	/*n_list *temp = stack_a;
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
	temp = stack_a;
    	while (temp != NULL)
	{
		n_list *next = temp->next;
		free(temp);
		temp = next;
	}*/
	return 0;
}

