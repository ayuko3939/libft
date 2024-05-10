/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:43:14 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 16:19:07 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	len;

	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

// int main(void)
// {
//     t_list *crt_lst = ft_lstnew(ft_strdup("ii to omou!"));
//     t_list *new_lst = ft_lstnew(ft_strdup("doudemo"));

//     printf("before : %d\n", ft_lstsize(crt_lst));
//     ft_lstadd_front(&crt_lst, new_lst);
//     printf("after  : %d\n", ft_lstsize(crt_lst));
//     return (0);
// }

// ccw ft_lstsize.c ft_lstadd_front.c ft_strdup.c ft_lstnew.c
// ft_strlcpy.c ft_strlen.c