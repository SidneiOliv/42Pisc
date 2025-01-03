/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:42:47 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/08/05 18:14:08 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int centena, int dezena, int unidade)
{
	write (1, &centena, 1);
	write (1, &dezena, 1);
	write (1, &unidade, 1);
	if (centena < '7' || dezena < '8' || unidade < '9')
	{
		write (1, &",", 1);
		write (1, &" ", 1);
	}
}

void	ft_print_comb(void)
{
	int	centena;
	int	dezena;
	int	unidade;

	centena = '0';
	while (centena <= '7')
	{
		dezena = centena + 1;
		while (dezena <= '8')
		{
			unidade = dezena + 1;
			while (unidade <= '9')
			{
				ft_write(centena, dezena, unidade);
				unidade++;
			}
			dezena++;
		}
		centena++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
