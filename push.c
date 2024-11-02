/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:04:17 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/01 21:17:13 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
void push_a(n_list **a_stack,n_list **b_stack)
{
	n_list *first_b;
	n_list *first_a;

	if(*b_stack == NULL)
		return ;
	first_a = *a_stack;
	first_b = *b_stack;
	*b_stack = (*b_stack)->next;
	first_b->next = first_a;
	*a_stack = first_b;
	write(1, "pa\n", 3);
}
void push_b(n_list **a_stack, n_list **b_stack)
{
	if(*a_stack == NULL)
		return ;
	n_list *first_a;
	n_list *first_b;

	first_a = *a_stack;
	first_b = *b_stack;

	*a_stack = first_a->next;
	first_a->next = first_b;
	*b_stack = first_a;
	write(1, "pb\n", 3);

}

/*int main(void)
{
	t_list *a = NULL;
	t_list *b = NULL;
	int val1 = 9, val2 = 7, val3= 8, val4 = 6, val5 = 5;
	
	t_list *first_a = ft_lstnew(&val1);
	t_list *first_b = ft_lstnew(&val2);
	t_list *second_a = ft_lstnew(&val3);
	t_list *second_b = ft_lstnew(&val4);
	t_list *third_a = ft_lstnew(&val5);

	ft_lstadd_back(&a, first_a);
	ft_lstadd_back(&b, first_b);
	ft_lstadd_back(&a, second_a);
	ft_lstadd_back(&b, second_b);
	ft_lstadd_back(&a, third_a);	
        
	push_a(&a, &b);
        
	t_list *temp = a;
	while (temp != NULL)
	{
		printf("%d\n", *(int *)temp->content);
		temp = temp->next;
	}
	t_list *temp2 = b;
	printf("Lista 2:\n");
	while (temp2 != NULL)
        {
                printf("%d\n", *(int *)temp2->content);
                temp2 = temp2->next;
        }

}*/
