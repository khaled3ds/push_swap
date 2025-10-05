/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: kadas <kadas@student.42.fr>                +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/09/27 15:28:48 by kadas             #+#    #+#             */
/*   Updated: 2025/09/27 15:28:48 by kadas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	numofdigits(char *s)
{
	int	i;
	int	counter;

	if (!s)
		return (0);
	i = 0;
	counter = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] == '0')
		i++;
	while (s[i])
	{
		i++;
		counter++;
	}
	if (counter > 10)
		return (0);
	return (1);
}

int	ft_longcmp(long long l1, long long l2)
{
	return (l1 == l2);
}

static int	isnum(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	validnum(char *s)
{
	long long	n;

	n = ft_atol(s);
	if (!s)
		return (0);
	if (isnum(s) && ((n >= -2147483648) && (n <= 2147483647)) && numofdigits(s))
		return (1);
	return (0);
}

int	notequal(char **s)
{
	int	i;
	int	j;

	if (!s || !*s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i + 1])
			j = i + 1;
		else
			break ;
		while (s[j])
		{
			if (ft_longcmp(ft_atol(s[i]), ft_atol(s[j])))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
