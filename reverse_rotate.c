/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:24:38 by ppeinado          #+#    #+#             */
/*   Updated: 2025/05/02 15:48:13 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_list_push **stack_a)
{
	t_list_push	*temp;
	t_list_push	*penultimate;

	temp = *stack_a;
	penultimate = NULL;
	while (temp->next != NULL)
	{
		penultimate = temp;
		temp = temp->next;
	}
	penultimate->next = NULL;
	temp->next = *stack_a;
	*stack_a = temp;
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_list_push **stack_b)
{
	t_list_push	*temp;
	t_list_push	*penultimate;

	temp = *stack_b;
	while (temp->next != NULL)
	{
		penultimate = temp;
		temp = temp->next;
	}
	penultimate->next = NULL;
	temp->next = *stack_b;
	*stack_b = temp;
	write(1, "rrb\n", 4);
}

//void	reverse_rotate_a_b(t_list_push **stack a, **stack_b)
