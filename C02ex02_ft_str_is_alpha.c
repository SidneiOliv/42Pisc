/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:20:16 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/13 16:20:23 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	alpha = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
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
	char	string5[] = "testing[";
	char	string6[] = "testing%";
	char	string7[] = "";
	int	alpha;
	
	printf ("\n");
	alpha = ft_str_is_alpha(string1);
	printf ("%s, alpha is = %d\n", string1, alpha);
	alpha = ft_str_is_alpha(string2);
	printf ("%s, alpha is = %d\n", string2, alpha);
	alpha = ft_str_is_alpha(string3);
	printf ("%s, alpha is = %d\n", string3, alpha);
	alpha = ft_str_is_alpha(string4);
	printf ("%s, alpha is = %d\n", string4, alpha);
	alpha = ft_str_is_alpha(string5);
	printf ("%s, alpha is = %d\n", string5, alpha);
	alpha = ft_str_is_alpha(string6);
	printf ("%s, alpha is = %d\n", string6, alpha);
	alpha = ft_str_is_alpha(string7);
	printf ("%s, alpha is = %d\n", string7, alpha);
	printf ("\n");
}*/
