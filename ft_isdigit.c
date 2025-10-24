/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:05:38 by shannema          #+#    #+#             */
/*   Updated: 2025/10/19 19:21:19 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9'); //checks the simple range
}
#include <stdio.h>

int main () 
{
    printf("%d %d\"n", ft_isdigit('5'), ft_isdigit('a'));
    return(0);
}