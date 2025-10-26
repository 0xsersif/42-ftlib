/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersif <sersif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 00:54:55 by sersif            #+#    #+#             */
/*   Updated: 2025/08/04 01:31:21 by sersif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strchr(char const *s, int c);
char	*ft_strdup(char *src);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnstr(char const *haystack, char const *needle, size_t num);
char	*ft_strrchr(char const *s, int c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_atoi(char const *str);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalnum(int ch);
int		ft_isalpha(int ch);
int		ft_isascii(int ch);
int		ft_isdigit(int ch);
int		ft_isprint(int ch);
int		ft_memcmp(char *ptr1, char *ptr2, size_t num);
int		ft_strncmp(char const *s1, char const *s2, size_t num);
size_t	ft_strlcat(char *dest, char const *src, size_t size);
size_t	ft_strlcpy(char *dest, char const *src, size_t size);
size_t	ft_strlen(char const *str);
void	ft_bzero(void *ptr, size_t num);
void	*ft_calloc(size_t num_elem, size_t elem_size);
void	*ft_memchr(void const *ptr, int ch, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memset(void *ptr, int value, size_t num);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif