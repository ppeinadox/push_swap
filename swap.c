/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:35:42 by ppeinado          #+#    #+#             */
/*   Updated: 2024/10/28 18:19:43 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *swap_a(t_list **a_stack)
{
	t_list *temp;
	t_list *aux;
       	temp = *a_stack;
	if(*temp->next == NULL)
		return(0);
	else
	{
		temp = temp->next;
		aux = ft_lstnew(temp->content);
		aux = aux->next;
		aux = (*a_stack);
	}
	*a_stack = (*a_stack)->next;
	while (*a_stack)
	{
		aux = (a_s
	}

}
