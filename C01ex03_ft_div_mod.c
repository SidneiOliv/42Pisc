/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:14:43 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/07 15:57:51 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 7;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("\n");
	printf("a / b = %d / %d = %d\n", a, b, div);
	printf("a %% b = %d %% %d = %d\n", a, b, mod);
	printf("div = %d ,mod = %d\n", div, mod);
	printf("\n");
}*/
