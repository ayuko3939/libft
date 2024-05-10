/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:47:39 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 16:03:03 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*upper(void *str)
// {
//     char *s;
//     size_t i;

//     s = (char *)str;
//     i = 0;
//     while (s[i])
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//             s[i] = s[i] - 32;
//         i++;
//     }
//     return (s);
// }

// void delete_content(void *content)
// {
//     free(content);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp_node;
	t_list	*tmp_cont;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		tmp_cont = (*f)(lst->content);
		tmp_node = ft_lstnew(tmp_cont);
		if (tmp_node == NULL)
		{
			ft_lstclear(&new_lst, del);
			(*del)(tmp_cont);
			return (new_lst);
		}
		ft_lstadd_back(&new_lst, tmp_node);
		lst = lst->next;
	}
	return (new_lst);
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

//     ft_lstadd_back(&node1, node2);
//     ft_lstadd_back(&node1, node3);
//     ft_lstadd_back(&node1, node4);

//     printf("---before---\n");
//     print_list(node1);
//     printf("\n");
//     printf("---after----\n");
//     print_list(ft_lstmap(node1, upper, delete_content));
//     return (0);
// }

// ccw ft_lstmap.c ft_lstadd_back.c ft_lstclear.c ft_lstnew.c ft_strdup.c
// ft_lstlast.c ft_strlcpy.c ft_strlen.c