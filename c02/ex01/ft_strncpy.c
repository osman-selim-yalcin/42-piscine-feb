/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:15:24 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/19 13:52:29 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned int n)
{
	int	a;
	int	b;

	b = n;
	a = 0;
	while (n != 0 && src[a] != '\0')
	{
		dest[a] = src [a];
		n--;
		a++;
	}
	while (b > a)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
