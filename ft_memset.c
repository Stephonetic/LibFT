/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:09:04 by shannema          #+#    #+#             */
/*   Updated: 2025/10/26 02:16:18 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp_ptr;
	tmp_ptr = (unsigned char *) s;

	while (n--) *tmp_ptr ++ = (unsigned char)c;
	return (s);
}
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char buf[6] = "xxxxx";
//     ft_memset(buf, 'A', 4);
//     buf[4] = 0;
//     printf("%s\n", buf); // AAAA x
//     return 0;
// }
