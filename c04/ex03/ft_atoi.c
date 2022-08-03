/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:24:49 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/20 14:51:20 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char	*str)
{
	int	a;
	int	c;
	int	last;

	c = 1;
	a = 0;
	last = 0;
	while (str[a] == ' ' || str[a] == '\t' || str[a] == '\v'
		|| str[a] == '\f' || str[a] == '\n' || str[a] == '\r')
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			c *= -1;
		a++;
	}
	while (str[a] >= 48 && str[a] <= 57)
	{
		last = (str[a] - 48) + (last * 10);
		a++;
	}
	return (last * c);
}
