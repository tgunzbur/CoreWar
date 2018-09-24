/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:55:05 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:49:21 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*s_new;

	if (s == NULL || f == NULL)
		return (NULL);
	size = ft_strlen(s);
	if ((s_new = (char *)malloc(sizeof(*s_new) * (size + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s_new[i] = f(i, s[i]);
		++i;
	}
	s_new[i] = '\0';
	return (s_new);
}
