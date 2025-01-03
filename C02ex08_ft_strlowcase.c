/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:41:23 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/08 17:41:26 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	string1[] = "TESTing";
	char	string2[] = "Test123";
	char	string3[] = "test@{!";
	char	string4[] = "";
	
	printf ("\n");
	
	printf ("%s >>> ", string1);
	printf ("str : %s >>> ", ft_strlowcase(string1));
	printf ("%s \n", string1);
	
	printf ("%s >>> ", string2);
	ft_strlowcase(string2);
	printf ("%s \n", string2);
	
	printf ("%s >>> ", string3);
	ft_strlowcase(string3);
	printf ("%s \n", string3);
	
	printf ("%s >>> ", string4);
	ft_strlowcase(string4);
	printf ("%s \n", string4);
	
	printf ("\n");
}*/
