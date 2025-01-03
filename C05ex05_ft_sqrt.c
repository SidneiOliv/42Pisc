/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:20:18 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/18 12:20:27 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;
	int	sq;

	res = 0;
	sq = 0;
	if (nb <= 0)
		return (0);
	while (res < nb)
	{
		sq++;
		res = sq * sq;
	}
	if (res == nb)
		return (sq);
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	num;

	(void)argc;
	num = atoi(argv[1]);
	printf ("\nargv[1] = %s >> atoi nb = %d\n", argv[1], num);
	
	printf ("\nnb : %d   sqrt : %d\n\n", num, ft_sqrt(num));
}*/
