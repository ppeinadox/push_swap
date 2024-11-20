/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:35:42 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/16 13:47:17 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
void swap_a(n_list **a_stack)
{
	n_list *first;
	n_list *second;
	
	if (*a_stack == NULL || a_stack->next == NULL)
                return ;
	first = *a_stack;
	second = a_stack->next;
	first->next = second->next;
	second->next = first;
	*a_stack = second;
	write(1, "sa\n", 3);

}

void swap_b(n_list **b_stack)
{
	n_list *first;
	n_list *second;
	
	if (*a_stack == NULL || a_stack->next == NULL)
		return ;
	first = *b_stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*b_stack = first;
	write(1, "sb\n", 3);
}

void swap_ss(n_list **a_stack, n_list **b_stack)
{
	swap_a(a_stack);
	swap_b(b_stack);
	write(1, "ss\n", 3);
}
