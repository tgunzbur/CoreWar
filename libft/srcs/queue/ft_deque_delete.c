/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:36:26 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/25 10:12:04 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	ft_deque_delete(t_deque *deque)
{
	t_deque_elmt	*tmp;

	while (deque->head)
	{
		tmp = deque->head->next;
		free(deque->head);
		deque->head = tmp;
	}
	free(deque);
}
