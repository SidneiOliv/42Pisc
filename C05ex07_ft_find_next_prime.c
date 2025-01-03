/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:11:06 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/18 17:11:10 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	dv;

	if (nb < 2)
		nb = 2;
	while (1)
	{
		i = 2;
		dv = 0;
		while (i <= nb / 2 && dv == 0)
		{
			if (nb % i == 0)
				dv = 1;
			i++;
		}
		if (dv == 0)
			return (nb);
		nb++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	num;

	(void)argc;
	
	if (argv[1] == 0)
	{
		printf ("nao digitou um numero.\n");
		return (2);
	}
	num = atoi(argv[1]);

	if (num == ft_find_next_prime(num))
		printf ("\nnum: %d >> prime: %d\n\n", num, ft_find_next_prime(num));
	else
		printf ("\nnum: %d >> next prime: %d\n\n", num, ft_find_next_prime(num));
}*/
