/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:09:05 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/01 13:59:57 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void  rotate_a(t_list **a_stack)
{
	t_list *first_to_last;

	first_to_last = *a_stack;
	*a_stack = (*a_stack)->next;
	first_to_last->next = NULL;
	ft_lstadd_back(a_stack, first_to_last);
	write(1, "ra\n", 3)
}

void rotate_b(t_list **b_stack)
{
	t_list *first_to_last;

	first_to_last = *b_stack;
	*b_stack = (*b_stack)->next;
	first_to_last->next = NULL;
	ft_lstadd_back(b_stack, first_to_last);
	write(1, "rb\n", 3);
}

void rotate_a_b(t_list **a_stack, t_list **b_stack)
{
	rotate_a(a_stack);
	rotate_b(b_stack);
	write(1, "rr\n", 3)
}
