/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:45:23 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/07 16:00:42 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	amem;
	int	bmem;

	amem = *a / *b;
	bmem = *a % *b;
	*a = amem;
	*b = bmem;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf ("\n");
	printf ("div a / b = %d\n", a);
	printf ("mod a %% b = %d\n", b);
	printf ("\n");
}*/
