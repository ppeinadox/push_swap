/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:41:18 by ppeinado          #+#    #+#             */
/*   Updated: 2024/05/11 19:33:12 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*data;

	data = malloc(sizeof(t_list));
	if (!data)
		return (NULL);
	data->content = content;
	data->next = NULL;
	return (data);
}

/*int main() 
{
    t_list *newNode = ft_lstnew("Hello, world!");

    if (newNode != NULL) 
    {
        printf("Contenido: %s\n",(char *) newNode->content);
        free(newNode);
    } 
    else 
        printf("Error: No se pudo crear el nodo\n");
    return 0;
}*/
