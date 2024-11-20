/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:37:08 by ppeinado          #+#    #+#             */
/*   Updated: 2024/11/16 17:53:55 by ppeinado         ###   ########.fr       */
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
void ft_free_split(char **array);
int ft_strcmp (const char *str1, const char *str2);
int check_duplicates(int number, n_list **nums);
int check_int (char **array, n_list **nums);
int process_format (int argc, char **argv, n_list **nums);
int     *add_to_array(n_list *nums);
void	quick_sort(int *array, int init, int end);
void radix_sort(n_list **stack_a, n_list **stack_b);
void push_a(n_list **a_stack,n_list **b_stack);
void push_b(n_list **a_stack, n_list **b_stack);
void  rotate_a(n_list **a_stack);
void rotate_b(n_list **b_stack);


#endif

