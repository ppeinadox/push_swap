/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:37:08 by ppeinado          #+#    #+#             */
/*   Updated: 2025/05/02 16:03:18 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

typedef struct int_list
{
	int				content;
	int				index;
	struct int_list	*next;
}					t_list_push;

t_list_push			*lstnewnum(int content);
void				lstadd_back_num(t_list_push **nums, t_list_push *node);
int					count_nodes(t_list_push *nums);
void				index_list(t_list_push **nums, int *array);
int					max_list(t_list_push *stack);
void				ft_free(char **array);
int					ft_strcmp(const char *str1, const char *str2);
long				ft_atol(char *str);
int					check_duplicates(int number, t_list_push **nums);
int					check_int(char **array, t_list_push **nums);
int					process_format(int argc, char **argv, t_list_push **nums);
int					*add_to_array(t_list_push *nums);
void				big_sort(t_list_push **stack_a, t_list_push **stack_b);
void				push_a(t_list_push **a_stack, t_list_push **b_stack);
void				push_b(t_list_push **a_stack, t_list_push **b_stack);
void				rotate_a(t_list_push **a_stack);
void				rotate_b(t_list_push **b_stack);
void				swap_a(t_list_push **a_stack);
void				swap_b(t_list_push **b_stack);
void				swap_ss(t_list_push **a_stack, t_list_push **b_stack);
void				reverse_rotate_a(t_list_push **stack_a);
void				reverse_rotate_b(t_list_push **stack_b);
void				tiny_sort(t_list_push **stack_a);
t_list_push			*looking_for_value(t_list_push *stack, int pos);
int					index_max(t_list_push *stack);
void				stack_in_order(t_list_push **stack_a,
						t_list_push **stack_b);
void				join(t_list_push **stack_a, t_list_push **stack_b);
int					is_sorted(t_list_push *stack_a);
int					add_node_list(t_list_push **nums, int r);
void				sort(t_list_push **stack_a, t_list_push **stack_b);
void				quick_sort(int *array, int init, int end);
void				short_sort(t_list_push **stack_a);
void				free_list(t_list_push *lst);

#endif
