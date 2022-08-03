/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:35:40 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/16 18:18:51 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_lowercase(char	*str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[b] != '\0')
	{
		if (str[b] >= 'a' && str[b] <= 'z')
			a++;
	b++;
	}
	if (b == a)
		return (1);
	return (0);
}
