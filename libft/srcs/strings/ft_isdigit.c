/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:13:38 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/16 14:35:03 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

int8_t	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}