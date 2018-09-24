/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs32.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 01:11:17 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:45:27 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

uint32_t	ft_abs32(int32_t nb)
{
	int32_t mask;

	mask = (nb >> (sizeof(int32_t) * CHAR_BIT - 1));
	nb = (uint32_t)((nb + mask) ^ mask);
	return (nb);
}
