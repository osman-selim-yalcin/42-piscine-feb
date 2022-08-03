/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyalcin <osyalcin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 05:32:38 by osyalcin          #+#    #+#             */
/*   Updated: 2022/02/21 23:58:39 by osyalcin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char	**argv)
{
	int	c;
	int	d;

	c = 1;
	if (argc > 1)
	{
		while (c < argc)
		{
			d = 0;
			while (argv[c][d] != '\0')
			{
				write (1, &argv[c][d], 1);
				d++;
			}
			write(1, "\n", 1);
			c++;
		}
	}
	return (0);
}
