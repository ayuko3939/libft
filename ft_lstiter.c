/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:53:10 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 16:03:30 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	upper(void *str)
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
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
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
//     ft_lstiter(node1, upper);
//     printf("---after----\n");
//     print_list(node1);
//     return (0);
// }

// ccw ft_lstiter.c ft_lstadd_back.c ft_lstnew.c ft_strdup.c ft_lstlast.c
// ft_strlcpy.c ft_strlen.c