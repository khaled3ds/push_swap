/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4-5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadas <kadas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:43:26 by kadas             #+#    #+#             */
/*   Updated: 2025/10/02 15:43:26 by kadas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	helper(t_list **t, t_list *tmp, t_list *min, t_list **t2)
{
	int	i;

	i = 0;
	while (tmp)
	{
		if (tmp->info < min->info)
			min = tmp;
		tmp = tmp->next;
	}
	tmp = *t;
	while (tmp != min)
	{
		i++;
		tmp = tmp->next;
	}
	if (i < 2)
		while (*t != min)
			ra(t);
	else
		while (*t != min)
			rra(t);
	pb(t, t2);
}

void	sort4(t_list **t)
{
	t_list	*min;
	t_list	*tmp;
	t_list	*t2;
	int		i;

	i = 0;
	t2 = NULL;
	tmp = *t;
	min = *t;
	helper(t, tmp, min, &t2);
	sorter3(t);
	pa(t, &t2);
}

void	sort5(t_list **t)
{
	t_list	*min;
	t_list	*tmp;
	t_list	*t2;
	int		i;

	i = 0;
	t2 = NULL;
	tmp = *t;
	min = *t;
	helper(t, tmp, min, &t2);
	tmp = *t;
	min = *t;
	helper(t, tmp, min, &t2);
	sorter3(t);
	pa(t, &t2);
	pa(t, &t2);
}
