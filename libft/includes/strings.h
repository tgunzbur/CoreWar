/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:38:28 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/24 20:09:38 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGS_H
# define STRINGS_H

# include "libft.h"

int32_t	ft_atoi(const char *str);
int64_t	ft_atoi64(const char *str);
int8_t	ft_isalnum(int c);
int8_t	ft_isalpha(int c);
int8_t	ft_isascii(int c);
int8_t	ft_isdigit(int c);
int8_t	ft_islower(int c);
int8_t	ft_isprint(int c);
int8_t	ft_isspace(int c);
int8_t	ft_isupper(int c);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putnbr_base(uint64_t n, int8_t base);
void	ft_putnbr_fd(int64_t n, int64_t fd);
void	ft_putnbr(int64_t n);
void	ft_putnbru(uint64_t n);
void	ft_putdouble(long double n, size_t size);
void	ft_putnstr(char const *s, size_t n);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_padzeroes(const char *s, size_t width);
char	*ft_strcat(char *s1, const char *s2);
void	ft_strcdel(char *s, char c);
char	*ft_strchr(const char *s, int c);
void	ft_strclr(char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
void	ft_strcrepl(char *s, char c, char substitute);
void	ft_strdel(char **as);
char	*ft_strdup(const char *s);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strisalnum(char *s);
int		ft_strisnum(char *s);
int		ft_strisnumber(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	**ft_strsplit(char const *s, char c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	ft_strtolower(char *s);
void	ft_strtoupper(char *s);
char	*ft_strtrim(char const *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_wcharlen(wchar_t wc);
void	ft_wputchar(wchar_t wc);
void	ft_wputnstr(wchar_t *ws, size_t n);
void	ft_wputstr(wchar_t *ws);
size_t	ft_wstrlen(wchar_t *ws);

#endif
