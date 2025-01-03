/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:03:30 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/10 20:03:33 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i1] != '\0' && to_find[i2] != '\0')
	{
		if (str[i1] == to_find[i2])
		{
			i1++;
			i2++;
		}
		else
		{
			i1++;
			i2 = 0;
		}
	}
	if (i2 != 0)
		return (&str[i1 - i2]);
	else
		return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string1[] = "Learning to Fly";
	char	to_find1[] = "";
	char	to_find2[] = "ab";
	char	to_find3[] = "nin";

	printf("\nstring1 : %s\n\n", string1);

	printf("to_find1 : %s\n", to_find1);
	printf("ft_strstr : %s", ft_strstr(string1, to_find1));
	printf ("\nstrstr    : %s\n\n", strstr(string1, to_find1));
	
	printf("to_find2 : %s\n", to_find2);
	printf("ft_strstr : %s", ft_strstr(string1, to_find2));
	printf ("\nstrstr    : %s\n\n", strstr(string1, to_find2));

	printf("to_find3 : %s\n", to_find3);
	printf("ft_strstr : %s", ft_strstr(string1, to_find3));
	printf ("\nstrstr    : %s\n\n", strstr(string1, to_find3));
}*/
