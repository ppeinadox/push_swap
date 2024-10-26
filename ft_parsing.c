/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:42:09 by ppeinado          #+#    #+#             */
/*   Updated: 2024/10/26 19:23:19 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
int check_int (char **array, t_list **nums)
{
	int j;
	int i;
	t_list *node;
	int *r;

	j = 0;
	i = 0;
	while (array[i])
	{
		if(ft_strcmp(array[i], "0") == 0)
		{
			r = malloc(sizeof(int));
			if(!r)
				return (1);
			*r = 0;	
			node = ft_lstnew(r);
			if (!node)
				return(free(r), 1);
                        ft_lstadd_back(nums, node);
		}
		else if ((ft_atoi(array[i])) == 0)
			return (1);
		else
		{	
			r = malloc(sizeof(int));
			if (!r)
				return (1);
			*r = ft_atoi(array[i]);
			node = ft_lstnew(r);
			if (!node)
				return (free(r), 1);
			ft_lstadd_back(nums, node);
		}
		i++;
	}
	return (0);
}
int process_format (int argc, char **argv, t_list **nums)
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
	t_list *nums = NULL;

	if (process_format(argc, argv, &nums) != 0)
	{	
		printf("ERROR\n");
		return (1);
	}
	else
	{
		t_list *temp = nums;
		while (temp != NULL)
		{
			printf("%d\n", *(int *)temp->content);
			temp = temp->next;
		}
	}
}
