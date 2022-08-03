/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:54:09 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/11 12:09:01 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putint(int num)
{
	char	ch_u;
	char	ch_d;

	if (num <= 9)
	{
		ch_u = num + 48;
		ft_putchar2('0', ch_u);
	}
	else
	{
		ch_u = (num % 10) + 48;
		ch_d = (num / 10) + 48;
		ft_putchar2(ch_d, ch_u);
	}
}

void	ft_catint(int fir, int sec)
{
	ft_putint(fir);
	write(1, " ", 1);
	ft_putint(sec);
	if (fir != 98 || sec != 99)
		ft_putchar2(',', ' ');
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			ft_catint(f, s);
			s++;
		}
		f++;
	}
}
