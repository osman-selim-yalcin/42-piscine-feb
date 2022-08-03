/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:58:20 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/19 12:58:36 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcat(char	*dest, char	*src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
		b++;
	while (src[a] != '\0')
	{
		dest[b + a] = src[a];
		a++;
	}
	dest[b + a] = '\0';
	return (dest);
}
