/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:32:16 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/17 19:32:20 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pot;

	pot = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		pot *= nb;
		power--;
	}
	return (pot);
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("\npo : %d\n", ft_iterative_power(2, -2));
	printf ("po : %d\n", ft_iterative_power(0, 2));
	printf ("po : %d\n", ft_iterative_power(2, 0));
	printf ("po : %d\n", ft_iterative_power(2, 4));
	printf ("po : %d\n\n", ft_iterative_power(4, 3));
}*/
