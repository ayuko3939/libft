/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:52:09 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 14:13:56 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int	main(void)
// {
// 	printf("s -> %c\n", ft_toupper('s'));
// 	printf("S -> %c\n", ft_toupper('S'));
// 	printf("  -> %d\n", toupper(''));
// 	printf("9 -> %c\n", ft_toupper('9'));
// 	printf("\\0 -> %d\n", ft_toupper('\0'));
// }