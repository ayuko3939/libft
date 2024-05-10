/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:31:40 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 13:53:38 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	upper(unsigned int idx, char c)
// {
// 	if (c >= 'a' && c <= 'z' && (idx % 2) == 0)
// 		c = c - 32;
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*string;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	string = (char *)ft_calloc(1, sizeof(char) * (len + 1));
	if (string == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		string[i] = (*f)(i, s[i]);
		i++;
	}
	return (string);
}

// int	main(void)
// {
// 	char const	str[] = "snow man!";

// 	printf("before : %s\n", str);
// 	printf("after  : %s\n", ft_strmapi(str, upper));
// 	return (0);
// }

// ccw ft_strmapi.c ft_calloc.c ft_bzero.c ft_memset.c ft_strlen.c