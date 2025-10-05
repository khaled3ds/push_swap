/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2-5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadas <kadas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:43:23 by kadas             #+#    #+#             */
/*   Updated: 2025/10/02 15:43:23 by kadas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort2(t_list **t)
{
	if ((*t)->info > (*t)->next->info)
		sa(t);
}

void	sorter3(t_list **t)
{
	long	first;
	long	second;
	long	third;

	first = (*t)->info;
	second = (*t)->next->info;
	third = (*t)->next->next->info;
	if (first > second && first > third && second > third)
	{
		sa(t);
		rra(t);
	}
	else if (first > second && first > third && second < third)
		ra(t);
	else if (second > first && second > third && first > third)
		rra(t);
	else if (second > first && second > third && first < third)
	{
		sa(t);
		ra(t);
	}
	else if (third > first && second < third && first > second)
		sa(t);
}

void	sorter5(t_list **t)
{
	int	i;

	i = ft_lstsize(*t);
	if (i == 2)
		sort2(t);
	else if (i == 3)
		sorter3(t);
	else if (i == 4)
		sort4(t);
	else
		sort5(t);
}
