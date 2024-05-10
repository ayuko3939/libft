/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:00:06 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 12:16:54 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}

//======================== model answer ========================
// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	unsigned char		chr;
// 	const unsigned char	*str;

// 	chr = (unsigned char)c;
// 	str = (const unsigned char *)s;
// 	while (n-- > 0)
// 	{
// 		if (*str == chr)
// 			return ((void *)str);
// 		str++;
// 	}
// 	return (NULL);
// }
//==============================================================

// int	main(void)
// {
//  const char name[] = "STARTO ENTERTAINMENT";

// 	printf("ft_memchr : %s\n", (char*)ft_memchr(name, E, 10));
// 	printf("   memchr : %s\n", (char*)memchr(name, E, 10));
// 	return (0);
// }