/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:20:04 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/10 19:20:14 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	id;
	unsigned int	is;

	id = 0;
	while (dest[id] != '\0')
	{
		id++;
	}
	is = 0;
	while (src[is] != '\0' && is < nb)
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
	int	num = 5;
	
	printf ("\ndestin    : %s\n", destin);
	printf ("source    : %s\n", source);
	printf ("num       : %d\n\n", num);
	
	printf ("ft_strncat: %s\n\n", ft_strncat(destin, source, num));
	
	char	destin2[] = "Learning ";
	printf (" strncat  : %s\n\n", strncat(destin2, source, num));
}*/
