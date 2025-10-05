/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pabs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: kadas <kadas@student.42.fr>                +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/09/27 15:28:35 by kadas             #+#    #+#             */
/*   Updated: 2025/09/27 15:28:35 by kadas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **sta, t_list **stb)
{
	t_list	*tmp;

	if (!stb || !(*stb))
		return ;
	tmp = *stb;
	*stb = (*stb)->next;
	tmp->next = *sta;
	(*sta) = tmp;
	ft_putstr("pa");
}

void	pb(t_list **sta, t_list **stb)
{
	t_list	*tmp;

	if (!sta || !(*sta))
		return ;
	tmp = *sta;
	*sta = (*sta)->next;
	tmp->next = *stb;
	(*stb) = tmp;
	ft_putstr("pb");
}
