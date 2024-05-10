/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:24:38 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 12:50:20 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// (0)NG  (1)OK
static int	validate(void *dst, const void *src)
{
	if (dst == NULL && src == NULL)
		return (0);
	return (1);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*destination;
	const char	*source;

	if (validate(dst, src) == 0)
		return (NULL);
	destination = (char *)dst;
	source = (char *)src;
	i = 0;
	if (source < destination && source + len > destination)
	{
		while (i < len)
		{
			destination[len - i - 1] = source[len - i - 1];
			i++;
		}
	}
	else
		dst = ft_memcpy(dst, src, len);
	return (dst);
}

// int	main(void)
// {
// 	char	str1[] = "abcdefghijklmnopqrstu";
// 	char	str2[] = "abcdefghijklmnopqrstu";

// 	printf("before : %s\n", str1);
// 	ft_memmove(str1 + 5, str1, 10);
// 	memmove(str2 + 5, str2, 10);
// 	printf("ft_memmove : %s\n", str1);
// 	printf("   memmove : %s\n", str2);
// 	return (0);
// }
