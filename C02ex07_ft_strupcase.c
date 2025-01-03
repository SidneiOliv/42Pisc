/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:13:36 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/08 17:13:49 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	string1[] = "Testing";
	char	string2[] = "test123";
	char	string3[] = "test@{!";
	char	string4[] = "";
	
	printf ("\n");
	printf ("str            : %p\n",ft_strupcase(string1));
	printf ("pointer string1: %p\n\n", string1);
		
	printf ("%s >>> ", string1);
	printf ("str = %s\n", ft_strupcase(string1));
	printf ("%s \n", string1);
	
	printf ("%s >>> ", string2);
	printf ("str = %s\n", ft_strupcase(string2));
	printf ("%s \n", string2);
	
	printf ("%s >>> ", string3);
	printf ("str = %s\n", ft_strupcase(string3));
	printf ("%s \n", string3);
	
	printf ("%s >>> ", string4);
	printf ("str = %s\n", ft_strupcase(string4));
	printf ("%s \n", string4);
}*/
