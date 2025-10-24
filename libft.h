/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:58:50 by shannema          #+#    #+#             */
/*   Updated: 2025/10/19 19:04:34 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H     // ✅ include guard start
# define LIBFT_H

# include <unistd.h>  // for write()
# include <stdlib.h>  // for malloc(), free(), etc.
# include <stddef.h>  // for size_t

// ===== Character Check Functions =====
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

// ===== String / Memory Functions =====
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

// ===== Case Conversion =====
int	ft_toupper(int c);
int	ft_tolower(int c);

// ===== String Searching =====
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

// ===== String Comparison =====
int	ft_strncmp(const char *s1, const char *s2, size_t n);

// ===== Memory Searching / Comparison =====
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

// ===== Substring / Conversion =====
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);

// ===== Memory Allocation =====
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);

#endif