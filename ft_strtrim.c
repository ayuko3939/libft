/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:30:19 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 14:00:04 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// (0)NG  (1)OK
static int	validate(char const *s1, char const *set)
{
	if (s1 == 0 || set == 0)
		return (0);
	return (1);
}

static size_t	get_start(char const *s1, char const *set)
{
	size_t	start;
	size_t	i;

	i = 0;
	start = 0;
	while (s1[start] != 0 && set[i] != 0)
	{
		if (s1[start] == set[i])
		{
			start++;
			i = 0;
		}
		else
			i++;
	}
	return (start);
}

static size_t	get_end(char const *s1, char const *set)
{
	size_t	end;
	size_t	i;

	i = 0;
	end = ft_strlen(s1) - 1;
	while (end > 0 && set[i] != 0)
	{
		if (s1[end] == set[i])
		{
			end--;
			i = 0;
		}
		else
			i++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*new_str;

	if (validate(s1, set) == 0)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set);
	len = end - start + 1;
	new_str = ft_substr(s1, start, len);
	return (new_str);
}

// int	main(void)
// {
// 	char const *str = " / / / / /abcdefghij / / / / /";
// 	char const *delimiter = " /";

// 	printf("before : %s\n", str);
// 	printf("after  : %s\n", ft_strtrim(str, delimiter));
// 	return (0);
// }

//ccw ft_strtrim.c ft_substr.c ft_calloc.c ft_memcpy.c ft_strlen.c
//ft_bzero.c ft_memset.c