/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:24:38 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/23 19:02:19 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	reverse_rotate_a(n_list **stack_a)
{
	n_list *temp;
	n_list *penultimate;

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
}

void	reverse_rotate_b(n_list **stack_b)
{
	n_list *temp;
	n_list *penultimate;

	temp = *stack_b;
	while (temp->next != NULL)
	{
		penultimate =  temp;
		temp = temp->next;
	}
	penultimate->next = NULL;
	temp->next = *stack_b;
	*stack_b = temp;
}

//void	reverse_rotate_a_b(n_list **stack a, **stack_b)
