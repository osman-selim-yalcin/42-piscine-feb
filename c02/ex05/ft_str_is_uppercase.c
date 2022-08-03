/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:35:40 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/16 18:19:25 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_uppercase(char	*str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[b] != '\0')
	{
		if (str[b] >= 'A' && str[b] <= 'Z')
			a++;
	b++;
	}
	if (b == a)
		return (1);
	return (0);
}
