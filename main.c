/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: kadas <kadas@student.42.fr>                +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/09/27 15:28:27 by kadas             #+#    #+#             */
/*   Updated: 2025/09/27 15:28:27 by kadas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	issorted(t_list *t)
{
	if (!t || !t->next)
		return (1);
	while (t->next)
	{
		if (t->next->info < t->info)
			return (0);
		t = t->next;
	}
	return (1);
}

static int	entering(t_list **st1, int argc, char *num, char **argv)
{
	int	arguments;

	arguments = 1;
	while (arguments < argc)
	{
		if (validnum(num))
			ft_lstadd_back(st1, ft_lstnew(ft_atol(num)));
		else
			return (0);
		arguments++;
		num = argv[arguments];
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	*num;
	t_list	*st1;
	int		arguments;

	arguments = 1;
	if (argc == 1)
		return (0);
	st1 = NULL;
	num = argv[arguments];
	if (!notequal((argv + 1)) || !entering(&st1, argc, num, argv))
	{
		ft_lstclear(&st1);
		return (write(2, "Error\n", 6));
	}
	if (ft_lstsize(st1) == 1 || issorted(st1))
	{
		ft_lstclear(&st1);
		return (0);
	}
	if (ft_lstsize(st1) <= 5)
		sorter5(&st1);
	else
		sorter(&st1);
	ft_lstclear(&st1);
	return (0);
}
