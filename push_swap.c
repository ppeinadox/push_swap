/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:42:09 by ppeinado          #+#    #+#             */
/*   Updated: 2025/05/02 13:50:10 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdio.h>

int	check_duplicates(int number, t_list_push **nums)
{
	t_list_push	*temp;

	temp = *nums;
	while (temp)
	{
		if (temp->content == number)
			return (1);
		temp = temp->next;
	}
	return (0);
}

int	check_int(char **array, t_list_push **nums)
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
			ret = add_node_list(nums, 0);
		}
		else if (ft_atol(array[i]) == 0)
			return (1);
		else
		{
			r = ft_atol(array[i]);
			ret = add_node_list(nums, r);
		}
		if (ret != 0)
			return (1);
		i++;
	}
	return (0);
}

int	add_node_list(t_list_push **nums, int r)
{
	t_list_push	*node;

	if (check_duplicates(r, nums) == 1)
		return (1);
	node = lstnewnum(r);
	if (!node)
		return (1);
	lstadd_back_num(nums, node);
	return (0);
}

int	process_format(int argc, char **argv, t_list_push **nums)
{
	int		i;
	char	**arr;

	i = 1;
	while (i < argc)
	{
		arr = ft_split(argv[i], ' ');
		if (check_int(arr, nums) != 0)
			return (ft_free(arr), 1);
		ft_free(arr);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_list_push	*stack_a;
	int			*array;
	t_list_push	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (write (1, "\n", 1));
	if (process_format(argc, argv, &stack_a) != 0)
	{
		printf("ERROR\n");
		return (free_list(stack_a), 1);
	}
	array = add_to_array(stack_a);
	index_list(&stack_a, array);
	sort(&stack_a, &stack_b);
	free(array);
	free_list(stack_a);
	return (0);
}
