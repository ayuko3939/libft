/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:52:51 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 16:03:40 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void delete_content(void *content)
// {
//     free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	(*del)((void *)lst->content);
	free(lst);
}

// void print_list(t_list *lst)
// {
//     while (lst != NULL)
//     {
//         printf("%s\n", (char *)lst->content);
//         lst = lst->next;
//     }
// }

// int main(void)
// {
//     t_list *node1 = ft_lstnew(ft_strdup("irohanihoheto"));
//     t_list *node2 = ft_lstnew(ft_strdup("tirinuruwo"));
//     t_list *node3 = ft_lstnew(ft_strdup("wakayotareso"));
//     t_list *node4 = ft_lstnew(ft_strdup("tunenaran"));

//     ft_lstadd_back(&node1, node2);
//     ft_lstadd_back(&node1, node3);
//     ft_lstadd_back(&node1, node4);

//     printf("---before---\n");
//     print_list(node1);
//     printf("\n");
//     ft_lstdelone(node3, delete_content);
//     printf("---after----\n");
//     print_list(node1);
//     return (0);
// }

// ccw ft_lstdelone.c ft_lstadd_back.c ft_lstnew.c ft_strdup.c ft_lstlast.c
// ft_strlcpy.c ft_strlen.c
