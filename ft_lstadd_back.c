/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:52:14 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 16:05:51 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst == NULL)
		return ;
	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}

// static void print_list(t_list *lst)
// {
//     while (lst != NULL)
//     {
//         printf("%s\n", (char *)lst->content);
//         lst = lst->next;
//     }
// }

// int main(void)
// {
//     t_list *crt_lst = ft_lstnew(ft_strdup("erabaretanoha"));
//     t_list *new_lst = ft_lstnew(ft_strdup("AYATAKAdesita."));

//     printf("---before---\n");
//     print_list(crt_lst);
//     printf("\n");
//     ft_lstadd_back(&crt_lst, new_lst);
//     printf("---after----\n");
//     print_list(crt_lst);
//     return (0);
// }

// ccw ft_lstadd_back.c ft_lstlast.c ft_strdup.c ft_strlcpy.c ft_strlen.c
// ft_lstadd_front.c