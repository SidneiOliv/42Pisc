/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:35:41 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/17 18:35:44 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	fact = nb * ft_recursive_factorial(nb - 1);
	return (fact);
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("\nFT : %d\n", ft_recursive_factorial(0));
	printf ("FT : %d\n", ft_recursive_factorial(-1));
	printf ("FT : %d\n", ft_recursive_factorial(1));
	printf ("FT : %d\n", ft_recursive_factorial(4));
	printf ("FT : %d\n\n", ft_recursive_factorial(7));
}*/
