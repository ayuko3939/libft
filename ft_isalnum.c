/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:28:32 by yohasega          #+#    #+#             */
/*   Updated: 2024/05/09 12:00:29 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int s = '\0';

// 	printf("ft_isalnum : %d\n", ft_isalnum(s));
// 	printf("   isalnum : %d\n", isalnum(s));
// 	return (0);
// }