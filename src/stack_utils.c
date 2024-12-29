/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krenken <krenken@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 23:06:00 by krenken           #+#    #+#             */
/*   Updated: 2024/11/05 16:05:22 by krenken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	init_stack(t_node **a, char **argv)
{
	long	n;
	int		i;

	i = 0;
	while(argv[i])
	{
		if (err)
	}
}
void	add_node_end(t_node **stack, int data)
{
	t_node	*new_node;
	t_node	*temp;

	new_node = create_node(data);
	if (!new_node)
		ft_printf("%s", "Error\n");
	if (!stack)
		*stack = new_node;
	temp = *stack;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
}

int	stack_len(t_node *stack)
{
	int	count;
	
	if (!stack)
		return (0);
	count = 0;
	while (stack)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}

