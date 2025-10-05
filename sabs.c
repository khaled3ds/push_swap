/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sabs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: kadas <kadas@student.42.fr>                +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/09/27 15:28:42 by kadas             #+#    #+#             */
/*   Updated: 2025/09/27 15:28:42 by kadas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **s)
{
	int	tmp;

	if (!s || !*s || !((*s)->next))
		return ;
	tmp = (*s)->info;
	(*s)->info = (*s)->next->info;
	(*s)->next->info = tmp;
}

void	sa(t_list **s)
{
	swap(s);
	ft_putstr("sa");
}

void	sb(t_list **s)
{
	swap(s);
	ft_putstr("sb");
}

void	ss(t_list **s1, t_list **s2)
{
	swap(s1);
	swap(s2);
	ft_putstr("ss");
}
