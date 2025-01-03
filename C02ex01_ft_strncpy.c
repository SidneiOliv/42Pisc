/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:31:35 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/08 10:31:46 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char dest[] = "123456789";
	char src[] = "Le";

	printf("\n");
	printf ("before, dest: %s\n", dest);

	printf ("function,%s\n", ft_strncpy(dest, src,5));

	printf ("after,  dest: %s\n", dest);
	printf("\n");

	
	char dest1[] = "123456789";
	printf ("before,dest1: %s\n", dest1);
	
	strncpy(dest1, src, 5);

	printf ("after, dest1: %s\n", dest1);
	printf("\n");
}*/
