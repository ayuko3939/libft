/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:42:55 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 12:00:25 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// {
// 	return (c <= 0 && c <= 127);
// }

// int	main(void)
// {
// 	int s = '\0';

// 	printf("ft_isascii : %d\n", ft_isascii(s));
// 	printf("   isascii : %d\n", isascii(s));
// 	return (0);
// }