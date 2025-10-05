/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrabs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadas <kadas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 16:08:31 by kadas             #+#    #+#             */
/*   Updated: 2025/10/02 15:52:38 by kadas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotatedown(t_list **sta)
{
	t_list	*tmp;
	t_list	*last;

	if (!sta || !*sta || !(*sta)->next)
		return ;
	last = *sta;
	tmp = *sta;
	while (last->next)
		last = last->next;
	while (tmp->next->next)
		tmp = tmp->next;
	last->next = *sta;
	*sta = last;
	tmp->next = NULL;
}

void	rra(t_list **sta)
{
	rotatedown(sta);
	ft_putstr("rra");
}

void	rrb(t_list **sta)
{
	rotatedown(sta);
	ft_putstr("rrb");
}

void	rrr(t_list **sta, t_list **stb)
{
	rotatedown(sta);
	rotatedown(stb);
	ft_putstr("rrr");
}
