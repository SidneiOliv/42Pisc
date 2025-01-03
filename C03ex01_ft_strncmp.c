/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:30:07 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/10 17:30:16 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i] && i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string1[] = "agfbg";
	char	string2[] = "aAbd";
	int	num = 3;

	printf ("\nstring1 : %s\n", string1);
	printf ("string2 : %s\n\n", string2);

	printf ("num     : %d\n\n", num);
	
	printf ("ft_strncmp : %d\n", ft_strncmp(string1, string2, num));
	printf (" strncmp   : %d\n\n", strncmp(string1, string2, num));
}*/
