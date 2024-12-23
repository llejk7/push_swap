/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:45:27 by krenken           #+#    #+#             */
/*   Updated: 2024/11/05 15:56:12 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*first;
	t_node	*temp;

	if (!*stack || !(*stack)->next)
		return (0);
	first = *stack;
	temp = *stack;
	while (temp->next)
		temp = temp->next;
	*stack = first->next;
	first->next = NULL;
	temp->next = first;
}
