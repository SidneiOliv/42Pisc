/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:57:15 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/15 11:22:59 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	id;
	int	is;

	id = 0;
	while (dest[id] != '\0')
	{
		id++;
	}
	is = 0;
	while (src[is] != '\0')
	{
		dest[id] = src[is];
		id++;
		is++;
	}
	dest[id] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	destin[] = "Learning ";
	char	source[] = "to fly";
	
	printf ("\ndestin    : %s\n", destin);
	printf ("source    : %s\n\n", source);
	printf ("ft_strcat : %s\n\n", ft_strcat(destin, source));
	
	char	destin2[] = "Learning ";
	printf (" strcat   : %s\n\n", strcat(destin2, source));
}*/
