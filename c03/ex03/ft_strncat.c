/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:12:56 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/19 13:09:39 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	int	a;
	int	b;

	b = 0;
	a = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	while (src[a] != '\0' && nb != 0)
	{
		dest[b + a] = src[a];
		nb--;
		a++;
	}
	dest[b + a] = '\0';
	return (dest);
}
