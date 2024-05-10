/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:52:09 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 14:13:52 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int	main(void)
// {
// 	printf("s -> %c\n", ft_tolower('s'));
// 	printf("A-1 -> %c\n", ft_tolower('A'-1));
// 	printf("  -> %c\n", ft_tolower(' '));
// 	printf("9 -> %c\n", ft_tolower('9'));
// 	printf("\\0 -> %d\n", ft_tolower('\0'));
// }