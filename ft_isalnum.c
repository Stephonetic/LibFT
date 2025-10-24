/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:58:20 by shannema          #+#    #+#             */
/*   Updated: 2025/10/19 19:35:17 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
    return ft_isalpha(c) || ft_isdigit(c); //combination of previous functions, declared
}
#include <stdio.h>

int main()
{
    printf("%d %d\n", ft_isalnum('A'), ft_isalnum('%'));
    return(0);
}