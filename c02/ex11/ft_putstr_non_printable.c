/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:52:11 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/19 16:11:13 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	printable(char a)
{
	if (a >= 32 && a <= 126)
	{
		return (1);
	}
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (1)
	{
		if (str[index] == '\0')
		{
			ft_putchar('\n');
			break ;
		}
		if (printable(str[index]) == 1)
		{
			ft_putchar (str[index]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[index] / 16]);
			ft_putchar("0123456789abcdef"[str[index] % 16]);
		}
		index++;
	}
}
