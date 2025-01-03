/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:40:00 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/08 14:40:07 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	alpha = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			alpha = 0;
		}
		i++;
	}
	return (alpha);
}
/*
int	main(void)
{
	char	string1[] = "TESTING";
	char	string2[] = "testing";
	char	string3[] = "TESTing";
	char	string4[] = "testing@";
	char	string5[] = "1234ing[";
	char	string6[] = "testing%";
	char	string7[] = "";
	int	alpha;
	
	printf ("\n");
	alpha = ft_str_is_lowercase(string1);
	printf ("%s, alpha is = %d\n", string1, alpha);
	alpha = ft_str_is_lowercase(string2);
	printf ("%s, alpha is = %d\n", string2, alpha);
	alpha = ft_str_is_lowercase(string3);
	printf ("%s, alpha is = %d\n", string3, alpha);
	alpha = ft_str_is_lowercase(string4);
	printf ("%s, alpha is = %d\n", string4, alpha);
	alpha = ft_str_is_lowercase(string5);
	printf ("%s, alpha is = %d\n", string5, alpha);
	alpha = ft_str_is_lowercase(string6);
	printf ("%s, alpha is = %d\n", string6, alpha);
	alpha = ft_str_is_lowercase(string7);
	printf ("%s, alpha is = %d\n", string7, alpha);
	printf ("\n");
}*/
