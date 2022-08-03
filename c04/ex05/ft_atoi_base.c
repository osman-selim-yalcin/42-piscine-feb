/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:27:39 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/20 14:49:12 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	checkerror(char *str)
{
	int	i;
	int	j;
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	i = 0;
	if (str[0] == '\0' || x == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < x)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi(char	*str)
{
	int	a;
	int	c;

	c = 1;
	a = 0;
	while (str[a] == ' ' || str[a] == '\t' || str[a] == '\v'
		|| str[a] == '\f' || str[a] == '\n' || str[a] == '\r')
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			c *= -1;
		a++;
	}
	if (c < 0)
		ft_putchar('-');
	return (a);
}

int	kisalt(char *str, int a, int d, int blen)
{
	int	v;
	int	power;
	int	last;
	int	toplam;

	toplam = 0;
	last = 0;
	while (str[a] != '\0')
	{
		d--;
		power = d;
		v = 1;
		while (power > 0)
		{
			v *= blen;
			power--;
		}
		toplam = (v * (str[a] - 48));
		last += toplam;
		a++;
	}
	return (last);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int	a;
	int	blen;
	int	d;
	int	last;
	int	error;

	blen = 0;
	last = 0;
	d = 0;
	error = checkerror(base);
	if (error == 0)
		return (0);
	while (base[blen] != '\0')
		blen++;
	a = ft_atoi(str);
	while (str[a + d] != '\0')
		d++;
	last = kisalt(str, a, d, blen);
	return (last);
}
