/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:44:37 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 16:03:17 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main(void)
// {
//     t_list *crt_lst = ft_lstnew(ft_strdup("ii to omou!"));
//     t_list *new_lst = ft_lstnew(ft_strdup("doudemo"));

//     printf("before : %p\n", ft_lstlast(new_lst));
//     ft_lstadd_front(&crt_lst, new_lst);
//     printf("after  : %p\n", ft_lstlast(new_lst));
//     return (0);
// }