/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:55:05 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/14 17:55:09 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
		s++;
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char	str[] = "Learning to fly";

	printf ("\nstr   : %s\n", str);
	printf("ft_strlen : %d\n", ft_strlen(str));

	int	length = strlen(str);	
	printf(" strlen   : %d\n\n", length);
}*/
