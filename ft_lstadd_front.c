/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:52:29 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 16:04:43 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
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
//     t_list *crt_lst = ft_lstnew(ft_strdup("ii to omou yo!"));
//     t_list *new_lst = ft_lstnew(ft_strdup("(doudemo)"));

//     printf("---before---\n");
//     print_list(crt_lst);
//     printf("\n");
//     ft_lstadd_front(&crt_lst, new_lst);
//     printf("---after----\n");
//     print_list(new_lst);
//     return (0);
// }

// ccw ft_lstadd_front.c ft_lstnew.c ft_strdup.c ft_strlcpy.c ft_strlen.c