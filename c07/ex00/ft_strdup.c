/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:36:23 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/28 12:53:06 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		a;
	int		c;
	char	*d;

	a = 0;
	c = 0;
	while (src[c] != '\0')
		c++;
	dest = (char *)malloc(c * sizeof(char) + 1);
	d = dest;
	if (!d)
		return (0);
	if (src[0] == '\0')
	{
		dest[0] = '\0';
		return (dest);
	}
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
