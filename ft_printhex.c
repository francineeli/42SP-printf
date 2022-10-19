/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:32:20 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/19 09:25:58 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printuphex(unsigned long int nb, int count)
{
	if (nb >= 16)
		count += ft_printuphex((nb / 16), count));
	count += write (1, &BASISUP[nb % 16], 1);
	return (count);
}

int	ft_printlwhex(unsigned long int nb, int count)
{
	if (nb >= 16)
		count += ft_printlwhex((nb / 16, count));
	count += write (1, &BASISLOWER[nb % 16], 1);
	return (count);
}
