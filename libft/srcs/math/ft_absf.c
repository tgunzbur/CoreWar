/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 19:35:42 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:45:27 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

/*
** By casting the value using the adress, we get the internal bit reprensation
** not the converted value in integer.
*/

float	ft_absf(float x)
{
	uint64_t casted;

	casted = *(uint64_t*)&x;
	casted &= 0x7FFFFFFF;
	return (*(float*)&casted);
}
