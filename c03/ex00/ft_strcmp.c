/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:45:56 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/19 12:41:11 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char	*s1, char	*s2)
{	
	int	c;

	c = 0;
	while ((s2[c] != '\0' || s1[c] != '\0') && (s1[c] == s2[c]))
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
