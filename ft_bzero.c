/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:52:38 by shannema          #+#    #+#             */
/*   Updated: 2025/10/27 21:55:22 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp_ptr;

	tmp_ptr = (char *) s;
	while(n > 0)
	{
		*(tmp_ptr++) = '\0';
		n--;
	}
}
// void	ft_bzero(void *s, size_t n)
// {
// 	unsigned char *p = s;
// 	while (n--)
// 	*p++ = 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
	char a[5] = "abcd";
	ft_bzero(a+1,2);
	printf("%d\n", a[1]);
	return (0);
}
