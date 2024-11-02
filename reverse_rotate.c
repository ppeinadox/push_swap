/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:24:38 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/02 11:53:24 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	reverse_rotate_a(n_list **stack_a)
{
	n_list *temp;
	n_list *penultimate;

	temp = *stack_a;
	while (temp->next != NULL)
	{
		penultimate = temp;
		temp = temp->next;
	}
	penultimate->next = NULL;
	temp->next = *stack_a;
	*stack_a = last_node;
}
