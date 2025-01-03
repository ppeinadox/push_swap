/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:37:08 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/23 18:39:35 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct int_list
{
	int	content;
	int	index;
	struct	int_list *next;
} n_list;

n_list  *lstnewnum(int content);
void    lstadd_back_num(n_list **nums, n_list *node);
int	count_nodes(n_list *nums);
void    index_list(n_list **nums, int *array);
int     max_list(n_list *stack);
void	ft_free_split(char **array);
int	ft_strcmp (const char *str1, const char *str2);
int	check_duplicates(int number, n_list **nums);
int	check_int (char **array, n_list **nums);
int	process_format (int argc, char **argv, n_list **nums);
int     *add_to_array(n_list *nums);
void	big_sort(n_list **stack_a, n_list **stack_b);
void	push_a(n_list **a_stack,n_list **b_stack);
void	push_b(n_list **a_stack, n_list **b_stack);
void 	rotate_a(n_list **a_stack);
void	rotate_b(n_list **b_stack);
void	swap_a(n_list **a_stack);
void	swap_b(n_list **b_stack);
void	swap_ss(n_list **a_stack, n_list **b_stack);
void	reverse_rotate_a(n_list **stack_a);
void	reverse_rotate_b(n_list **stack_b);
void    tiny_sort(n_list **stack_a);
n_list  *looking_for_value(n_list *stack, int pos);
int	index_max(n_list *stack);
void    stack_in_order(n_list **stack_a, n_list **stack_b);
void    join(n_list **stack_a, n_list **stack_b);
int     is_sorted(n_list *stack_a);
int	add_node_list(char **array, n_list **nums, int r);
void    sort(n_list **stack_a, n_list **stack_b, int **array);
void    quick_sort(int *array, int init, int end);
void    short_sort(n_list **stack_a);

#endif

