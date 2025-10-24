/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:58:48 by shannema          #+#    #+#             */
/*   Updated: 2025/10/24 17:05:26 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// #include "libft.h"
// #include <stddef.h>
// #include <stdio.h>
// #include <stdlib.h>

// int ft_isalpha(int c)
// {
//     if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
//         return (1);
//     return (0);
// }
