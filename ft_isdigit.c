/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:53:51 by shannema          #+#    #+#             */
/*   Updated: 2025/10/23 14:43:59 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //for .h files you make for yourself, and < > are to be written to indicate pre built libraries, such as stdio 

int ft_isdigit (int c)
{
    if (c > '0' && c < '9') //we're indicating the ascii value with the '' 
        return (0);
    return (1);
}

#include <stdio.h>

int main (int argc, char **argv)
{
	printf("%d\n", ft_isdigit('2'));
	return (0);
}