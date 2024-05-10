/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:51:51 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 13:52:33 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	if (src_len == 0)
		return (dst_len + src_len);
	i = 0;
	if (dstsize > dst_len)
	{
		while (src[i] && i < src_len && (dst_len + i < dstsize - 1))
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char name1[10] = "STARTO ";
// 	char name2[10] = "STARTO ";
// 	char name3[14] = "ENTERTAINMENT";

// 	printf("ft_strlcat : %lu : %s\n", ft_strlcat(name1, name3, 7), name1);
// 	printf("   strlcat : %lu : %s\n", strlcat(name2, name3, 7), name2);
// 	return (0);
// }
