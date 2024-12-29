/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 21:15:39 by krenken           #+#    #+#             */
/*   Updated: 2024/11/05 15:56:02 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	push(t_node **src, t_node **dest)
{
	t_node	*temp;

	if (!*src)
		return (0);
	temp = *src;
	*src = (*src)->next;
	temp->next = *dest;
	*dest = temp;
}
