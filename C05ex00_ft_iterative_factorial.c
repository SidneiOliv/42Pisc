/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:04:51 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/17 18:04:55 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ft;

	ft = nb;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 1)
	{
		nb--;
		ft = ft * nb;
	}
	return (ft);
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("\nFT : %d\n", ft_iterative_factorial(-1));
	printf ("\nFT : %d\n", ft_iterative_factorial(0));
	printf ("\nFT : %d\n", ft_iterative_factorial(4));
	printf ("\nFT : %d\n\n", ft_iterative_factorial(7));
}*/
