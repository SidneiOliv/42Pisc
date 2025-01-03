/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iralexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:34:24 by iralexan          #+#    #+#             */
/*   Updated: 2024/08/18 14:11:05 by iralexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdrush02.h"
#include <unistd.h> 
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i;

		i = 0;
		while (i < argc)
		{
			while (argv[i])
			{
				argv[i]++;
			}
			i++;
		}
		return (0);
	}
}
