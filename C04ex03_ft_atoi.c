/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:01:58 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/15 18:02:14 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	fsignal;
	int	number;

	i = 0;
	fsignal = 1;
	number = 0;
	while (str[i] != '\0' && number == 0)
	{
		if ((str[i] >= '!' && str[i] <= '*') || str[i] == ',' || str[i] == '.'
			|| str[i] == '/' || (str[i] >= ':' && str[i] <= '~'))
			return (0);
		if (str[i] == '-')
			fsignal *= -1;
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == '+'
			|| str[i] == '-')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			number *= 10;
			number += (str[i] - 48);
			i++;
		}
	}
	return (fsignal * number);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	string[] = " ---+--+1234ab567";
	char	string1[] = "a-1234ab567";
	char	string2[] = "001abc/$";
	char	string3[] = "+++1324%";

	printf ("\nstring : %s\n", string);
	printf ("ft_atoi : %d\n", ft_atoi(string));
	//printf (" atoi   : %d\n", atoi(string));

	printf ("\nstring1 : %s\n", string1);
	printf ("ft_atoi : %d\n", ft_atoi(string1));
	//printf (" atoi   : %d\n", atoi(string1));

	printf ("\nstring2 : %s\n", string2);
	printf ("ft_atoi : %d\n", ft_atoi(string2));
	//printf (" atoi   : %d\n", atoi(string2));

	printf ("\nstring3 : %s\n", string3);
	printf ("ft_atoi : %d\n", ft_atoi(string3));
	//printf (" atoi   : %d\n", atoi(string3));
}*/
