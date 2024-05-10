/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:38:17 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 13:56:58 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*temp;

	temp = NULL;
	c = (char)c;
	while (*s)
	{
		if (*s == c)
			temp = s;
		s++;
	}
	if (*s == '\0' && c == '\0')
		temp = s;
	return ((char *)temp);
}

//======================== model answer ========================
// char	*ft_strrchr(const char *s, int c)
// {
// 	const char	*temp;

// 	temp = NULL;
// 	c = (char)c;
// 	while (1)
// 	{
// 		if (*s == c)
// 			temp = s;
// 		if (*s == '\0')
// 			break;
// 		s++;
// 	}
// 	return ((char *)temp);
// }
//==============================================================

// int	main(void)
// {
// 	char str[] = "Snow Man";

// 	printf("%s\n", ft_strchr(str, 'n'));
// 	return (0);
// }