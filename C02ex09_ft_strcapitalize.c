/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:52:36 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/08 17:52:39 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first;

	i = 0;
	first = 1;
	while (str[i] != '\0')
	{
		if (first == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		if (first == 1 && (str[i] >= 'A' && str[i] <= 'Z'))
			first = 0;
		if (first == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			first = 0;
		}
		if (str[i] >= '0' && str[i] <= '9')
			first = 0;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a' ) || str[i] > 'z')
			first = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	string1[] = "ola, tudo Bem?";
	char	string2[] = "42paLAvras";
	char	string3[] = "quarenta-E-duas";
	char	string4[] = "Cinquenta+e+Um";
	
	printf ("\n");
	
	printf ("%s >>> ", string1);
	printf ("str : %s >>> ", ft_strcapitalize(string1));
	printf ("%s \n", string1);
	
	printf ("%s >>> ", string2);
	ft_strcapitalize(string2);
	printf ("%s \n", string2);
	
	printf ("%s >>> ", string3);
	ft_strcapitalize(string3);
	printf ("%s \n", string3);
	
	printf ("%s >>> ", string4);
	ft_strcapitalize(string4);
	printf ("%s \n", string4);
	
	printf ("\n");
}*/
