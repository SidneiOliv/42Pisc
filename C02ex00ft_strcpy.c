/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:55:02 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/07 18:38:43 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "Porto";
	char	src[] = "Brag";

	printf ("\nantes  src = %s = dest = %s\n", src, dest);
	printf ("ft_strcpy dest = %s\n", ft_strcpy (dest, src));
	printf ("depois src = %s = dest = %s\n", src, dest);
	
	char	dest1[] = "Porto";

	printf ("\nantes  src = %s = dest1 = %s\n", src, dest1);
	printf ("strcpy dest1 = %s\n", strcpy (dest1, src));
	printf ("depois src = %s = dest1 = %s\n", src, dest1);
}*/
