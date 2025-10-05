/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadas <kadas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:08:53 by kadas             #+#    #+#             */
/*   Updated: 2025/10/03 20:07:10 by kadas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fillarray(t_list *tmp, int *arr)
{
	int	i;
	int	j;

	i = 0;
	j = ft_lstsize(tmp);
	while (i < j)
	{
		arr[i] = tmp->info;
		i++;
		tmp = tmp->next;
	}
}

static void	indexing(int *arr, t_list *t)
{
	int	i;
	int	j;
	int	tmp;
	int	counter;

	i = 0;
	j = ft_lstsize(t);
	while (i < j)
	{
		counter = 0;
		tmp = 0;
		while (tmp < j)
		{
			if (arr[i] > arr[tmp])
				counter++;
			tmp++;
		}
		t->info = counter;
		t = t->next;
		i++;
	}
}

static void	normalize(t_list *t, int size)
{
	int		*arr;
	t_list	*tmp;

	tmp = t;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return ;
	fillarray(tmp, arr);
	indexing(arr, t);
	free(arr);
}

static void	sorthelp(int maxbits, int size, t_list **t, t_list **t2)
{
	int	i;
	int	j;

	i = 0;
	while (i < maxbits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*t)->info >> i) & 1) == 0)
				pb(t, t2);
			else
				ra(t);
			j++;
		}
		while (*t2)
			pa(t, t2);
		i++;
	}
}

void	sorter(t_list **t)
{
	int		size;
	int		i;
	t_list	*t2;
	int		maxbits;

	i = 0;
	maxbits = 0;
	t2 = NULL;
	size = ft_lstsize(*t);
	normalize(*t, size);
	while (((size - 1) >> maxbits))
		maxbits++;
	sorthelp(maxbits, size, t, &t2);
}
