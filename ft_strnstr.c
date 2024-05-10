/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 22:39:31 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 13:55:44 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	if (*needle == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	n_len = ft_strlen(needle);
	while (*haystack && len >= n_len)
	{
		if (ft_strncmp(haystack, needle, n_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}	
	return (NULL);
}

// int	main(void)
// {
// 	// const char *s = "arechowchowchau?-chauchauchowchowtochau.";
// 	// const char *word = "chau";

// 	// printf("ft_strnstr : %s\n", ft_strnstr(s, word, 15));
// 	// printf("   strnstr : %s\n", strnstr(s, word, 15));

// 	char *str = "aaabcabcd";
// 	printf("ft_strnstr : %s\n", ft_strnstr(str, "aaabc", 5));
// 	printf("   strnstr : %s\n", strnstr(str, "aaabc", 5));
// 	return (0);
// }

//ccw ft_strnstr.c ft_strchr.c ft_strlen.c ft_strncmp.c

// int    main(void)
// {
//     char *str = "libft-test-tokyo";
//     int    len = strlen(str);
//     int n = 1;

//     for (int i = 0; i < len; i++)
//     {
//         printf("%d : (%s, \"\", %d)\n", n, str, i);
//         n++;
//         printf("%d : (%s, \"libft-test-tokyo\", %d)\n", n, str, i);
//         n++;
//         printf("%d : (%s, \"libft\", %d)\n", n, str, i);
//         n++;
//         printf("%d : (%s, \"test\", %d)\n", n, str, i);
//         n++;
//         printf("%d : (%s, \"tokyo\", %d)\n", n, str, i);
//         n++;
//         printf("%d : (%s, \"libft~\", %d)\n", n, str, i);
//         n++;
//         printf("%d : (%s, \"z\", %d)\n", n, str, i);
//         n++;
//     }
//     printf("113 : (\"\", \"hello\", 5)\n");
//     printf("114 : (\"\", \"\", 0)\n");
//     printf("115 : (NULL, \"1\", 0)\n");
//     return (0);
// }