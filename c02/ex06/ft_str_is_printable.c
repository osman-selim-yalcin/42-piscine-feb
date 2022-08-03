/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:35:40 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/19 16:08:13 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char	*str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (str[a] == '\0')
		return (1);
	while (str[b] != '\0')
	{
		if (str[b] >= 32 && str[b] <= 126)
			a++;
	b++;
	}
	if (b == a)
		return (1);
	return (0);
}
