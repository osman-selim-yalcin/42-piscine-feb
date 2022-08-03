/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:17:08 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/16 11:16:17 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_mini(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 65 && str[c] <= 90)
			str[c] += 32;
	c++;
	}
}

char	*ft_strcapitalize(char	*str)
{
	int	b;
	int	c;

	b = 0;
	c = 0;
	ft_mini(str);
	while (str[b] != '\0')
	{
		if (str[b + 1] >= 97 && str[b + 1] <= 122)
		{
			if ((str[b] <= 64) && !(str[b] >= 48 && str[b] <= 57))
				str[b + 1] -= 32;
			if (str[b] >= 91 && str[b] <= 96)
				str[b + 1] -= 32;
			if (str[b] >= 123)
				str[b + 1] -= 32;
			if (str[0] >= 97 && str[0] <= 122)
				str[0] -= 32;
		}
		b++;
	}
	return (str);
}
