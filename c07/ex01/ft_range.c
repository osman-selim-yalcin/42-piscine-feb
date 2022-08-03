/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:09:03 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/28 12:54:13 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	fark;
	int	*d;
	int	a;
	int	*hata;

	a = 0;
	if (min >= max)
		return (0);
	fark = max - min;
	d = (int *)malloc(fark * sizeof(int));
	hata = d;
	if (!hata)
		return (0);
	while (fark != 0)
	{
		d[a] = min++;
		fark--;
		a++;
	}
	return (d);
}
