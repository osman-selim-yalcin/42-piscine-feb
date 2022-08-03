/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 05:43:48 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/21 23:56:17 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	t;

	t = 1;
	a = 1;
	b = 0;
	if (argc > 1)
	{
		while (argc > a)
		{
			b = 0;
			while (argv[argc - t][b] != '\0')
			{
				write(1, &argv[argc - t][b], 1);
				b++;
			}
			write(1, &"\n", 1);
			t++;
			a++;
		}
	}
	return (0);
}
