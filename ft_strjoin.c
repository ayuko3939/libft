/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:29:40 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 13:49:07 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	length;
	size_t	len_s1;
	size_t	len_s2;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	length = len_s1 + len_s2;
	new_str = (char *)ft_calloc(1, sizeof(char) * (length + 1));
	if (new_str == NULL)
		return (new_str);
	ft_memcpy((void *)new_str, (void *)s1, len_s1);
	ft_memcpy((void *)new_str + ft_strlen(s1), (void *)s2, len_s2);
	return (new_str);
}

// int	main(void)
// {
// 	char const	*str1 = "my favorite animal is ";
// 	char const	*str2 = "the nyancat";
// 	char		*str3 = NULL;

// 	str3 = ft_strjoin(str1, str2);
// 	printf("%s\n", str3);
// 	free(str3);
// 	return (0);
// }