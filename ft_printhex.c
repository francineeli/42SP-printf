/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:32:20 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/20 12:23:10 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long nb, int flag)
{
	int	counter;

	counter = 0;
	if (nb >= 16)
	{
		counter += ft_printhex((nb / 16), flag);
		counter += ft_printhex((nb % 16), flag);
	}
	else
	{
		if (flag == 'x')
			return (ft_printchar(BASISLW[nb]));
		else
			return (ft_printchar(BASISUP[nb]));
	}
	return (counter);
}
