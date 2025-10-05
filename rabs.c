/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rabs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadas <kadas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 15:35:12 by kadas             #+#    #+#             */
/*   Updated: 2025/10/02 15:52:28 by kadas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*first;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = (*stack)->next;
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	first->next = NULL;
}

void	ra(t_list **sta)
{
	rotate(sta);
	ft_putstr("ra");
}

void	rb(t_list **stb)
{
	rotate(stb);
	ft_putstr("rb");
}

void	rr(t_list **sta, t_list **stb)
{
	rotate(sta);
	rotate(stb);
	ft_putstr("rr");
}
