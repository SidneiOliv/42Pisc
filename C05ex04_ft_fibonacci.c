/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:48:12 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/18 11:48:23 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("\nindex : %d  fibonacci : %d\n", -1, ft_fibonacci(-1));
	printf ("\nindex : %d  fibonacci : %d\n\n", 0, ft_fibonacci(0));
	
	int	i = 1;
	while (i < 11)
	{
		printf ("index : %d  fibonacci : %d\n", i, ft_fibonacci(i));
		i++;
	}
	
	printf ("\nindex : %d  fibonacci : %d\n", 12, ft_fibonacci(12));
	printf ("\nindex : %d  fibonacci : %d\n\n", 23, ft_fibonacci(23));
}*/
