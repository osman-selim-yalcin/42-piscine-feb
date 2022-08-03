/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:52:12 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/19 12:47:00 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && n > 0)
	{
		if (s1[c] != s2[c])
			break ;
		n--;
		c++;
	}
	if (n == 0)
		return (0);
	return (s1[c] - s2[c]);
}
