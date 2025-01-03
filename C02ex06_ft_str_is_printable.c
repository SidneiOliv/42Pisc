/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:48:12 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/08 16:48:15 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	print;

	i = 0;
	print = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			print = 0;
		}
		i++;
	}
	return (print);
}
/*
int	main(void)
{
	char	string1[] = "TESTING";
	char	string2[] = " ";
	char	string3[] = "~";
	char	string4[] = "123";
	char	string5[] = "";
//	char	string6[] = 'Bell';
	int	print;
	
	printf ("\n");
	print = ft_str_is_printable(string1);
	printf ("%s, print = %d\n", string1, print);
	print = ft_str_is_printable(string2);
	printf ("%s, print = %d\n", string2, print);
	print = ft_str_is_printable(string3);
	printf ("%s, print = %d\n", string3, print);
	print = ft_str_is_printable(string4);
	printf ("%s, print = %d\n", string4, print);
	print = ft_str_is_printable(string5);
	printf ("%s, print = %d\n", string5, print);
//	print = ft_str_is_printable(string6);
//	printf ("%s, print = %d\n", string6, print);
	printf ("\n");
}*/
