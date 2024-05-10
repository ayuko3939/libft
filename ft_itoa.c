/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:31:17 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 16:19:47 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_length(long num, int sign)
{
	size_t	length;

	length = 0;
	if (num == 0)
		return (1);
	if (sign < 0)
		length++;
	while (num > 0)
	{
		num = num / 10;
		length++;
	}
	return (length);
}

static char	*num_to_str(char *strnum, long num, size_t len)
{
	if (num >= 10)
		num_to_str(strnum, num / 10, len - 1);
	strnum[len - 1] = (num % 10) + '0';
	return (strnum);
}

char	*ft_itoa(int n)
{
	char	*number;
	long	lnum;
	size_t	len;
	int		sign;

	lnum = (long)n;
	sign = 1;
	if (lnum < 0)
	{
		sign = -1;
		lnum = lnum * -1;
	}
	len = get_length(lnum, sign);
	number = (char *)ft_calloc(1, sizeof(char) * (len + 1));
	if (number == NULL)
		return (number);
	number = num_to_str(number, lnum, len);
	if (sign < 0)
		number[0] = '-';
	return (number);
}

// int	main(void)
// {
// 	int number = 0;

// 	printf("%s\n", ft_itoa(number));
// 	return (0);
// }

//ccw ft_itoa.c ft_calloc.c ft_bzero.c ft_memset.c