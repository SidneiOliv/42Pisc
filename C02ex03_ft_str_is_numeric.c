/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:21:00 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/08 14:21:11 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			num = 0;
		}
		i++;
	}
	return (num);
}
/*
int	main(void)
{
	char	string1[] = "TESTing";
	char	string2[] = "@TE12ing[";
	char	string3[] = "0123456789";
	char	string4[] = "";
	int	num;

	printf ("\n");
	num = ft_str_is_numeric(string1);
	printf ("%s, num = %d\n", string1, num);
	num = ft_str_is_numeric(string2);
	printf ("%s, num = %d\n", string2, num);
	num = ft_str_is_numeric(string3);
	printf ("%s, num = %d\n", string3, num);
	num = ft_str_is_numeric(string4);
	printf ("%s, num = %d\n", string4, num);
	printf ("\n");
}*/
