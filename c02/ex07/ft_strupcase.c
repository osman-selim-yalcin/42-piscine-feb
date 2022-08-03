/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:40:24 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/16 11:08:58 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strupcase(char	*str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[b] != '\0')
	{
		if (str[b] >= 'a' && str[b] <= 'z')
		{
			str[b] -= 32;
		}
	b++;
	}
	return (str);
}
