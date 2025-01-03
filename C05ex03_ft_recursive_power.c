/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 20:04:12 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/17 20:04:14 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	pot;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	pot = nb * ft_recursive_power(nb, power - 1);
	return (pot);
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("\npo : %d\n", ft_recursive_power(2, -2));
	printf ("po : %d\n", ft_recursive_power(0, 2));
	printf ("po : %d\n", ft_recursive_power(2, 0));
	printf ("po : %d\n", ft_recursive_power(2, 4));
	printf ("po : %d\n\n", ft_recursive_power(4, 3));
}*/
