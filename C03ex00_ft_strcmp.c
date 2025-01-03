/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:06:12 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/10 15:06:17 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string0[] = "adf";
	char	string1[] = "agh";
	char	string2[] = "adf";
	char	string3[] = "abs";

	printf ("\nstring0  : %s\n\n", string0);

	printf ("string1  :  %s\n", string1);
	printf ("ft_strcmp : %d\n", ft_strcmp(string0, string1));
	printf (" strcmp   : %d\n\n", strcmp(string0, string1));

	printf ("string2  :  %s\n", string2);
	printf ("ft_strcmp : %d\n", ft_strcmp(string0, string2));
	printf (" strcmp   : %d\n\n", strcmp(string0, string2));

	printf ("string3  :  %s\n", string3);
	printf ("ft_strcmp : %d\n", ft_strcmp(string0, string3));
	printf (" strcmp   : %d\n\n", strcmp(string0, string3));
}*/
