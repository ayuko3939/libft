/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:53:04 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 16:19:22 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void delete_content(void *content)
// {
//     free(content);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		(*del)((void *)(*lst)->content);
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
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
//     t_list *node1 = ft_lstnew(ft_strdup("yuinookuyama"));
//     t_list *node2 = ft_lstnew(ft_strdup("kefukoete"));
//     t_list *node3 = ft_lstnew(ft_strdup("asakiyumemisi"));
//     t_list *node4 = ft_lstnew(ft_strdup("yoimosesu"));
//     t_list **list = &node3;

//     ft_lstadd_back(&node1, node2);
//     ft_lstadd_back(&node1, node3);
//     ft_lstadd_back(&node1, node4);

//     printf("---before---\n");
//     print_list(node1);
//     printf("\n");
//     ft_lstclear(list, delete_content);
//     printf("---after----\n");
//     print_list(node1);
//     return (0);
// }

// ccw ft_lstclear.c ft_lstadd_back.c ft_lstnew.c ft_strdup.c
// ft_lstlast.c ft_strlcpy.c ft_strlen.c