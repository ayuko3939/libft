/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:56:45 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 12:00:57 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int s = '\0';

// 	printf("ft_isprint : %d\n", ft_isprint(s));
// 	printf("   isprint : %d\n", isprint(s));
// 	return (0);
// }