/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: kadas <kadas@student.42.fr>                +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/09/27 15:26:19 by kadas             #+#    #+#             */
/*   Updated: 2025/09/27 15:26:19 by kadas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	ft_atol(const char *nptr)
{
	long long	sum;
	int			i;
	int			flag;

	flag = 1;
	i = 0;
	sum = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			flag *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		sum = sum * 10 + (nptr[i] - '0');
		i++;
	}
	return (flag * sum);
}
