/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:43:18 by shannema          #+#    #+#             */
/*   Updated: 2025/10/25 20:32:32 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
// # include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_isprint('a'));
// 	printf("%d\n", ft_isprint('5'));
// 	printf("%d\n", ft_isprint(127));
// 	return (0);
// }