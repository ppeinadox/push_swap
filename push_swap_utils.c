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

void	ft_free(char **array)
{
	int	i;

	i = 0;
	if (!array)
		return ;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free (array);
}

int	ft_strcmp(const char *str1, const char *str2)
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

void	free_list(t_list_push *lst)
{
	t_list_push	*temp;

	while (lst != NULL)
	{
		temp = lst->next;
		free(lst);
		lst = temp;
	}
}
