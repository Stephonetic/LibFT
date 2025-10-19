/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steph <steph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:58:48 by shannema          #+#    #+#             */
/*   Updated: 2025/10/19 11:34:58 by steph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// #include "libft.h"

// int ft_isalpha(int c)
// {
//     if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
//         return (1);
//     return (0);
// }

// #include <stddef.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
//     char    s[] = "Maurice ist der Beste"; //"No cap"
//     printf("%i\n", ft_isalpha(s[0]));
//     return (0);
// }
