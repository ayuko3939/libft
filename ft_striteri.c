/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:32:11 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 13:48:45 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	upper(unsigned int i, char *s)
// {
//     if (s[i] >= 'a' && s[i] <= 'z')
//         s[i] = s[i] - 32;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char	str[] = "snow man!";

// 	printf("before : %s\n", str);
// 	ft_striteri(str, upper);
// 	printf("after  : %s\n", str);
// 	return (0);
// }

// ccw ft_strmapi.c ft_calloc.c ft_bzero.c ft_memset.c ft_strlen.c