/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:32:20 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/18 17:50:36 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printheX(unsigned long int nb, int count)
{

		if (nb >= 16)
			count += ft_printheX((nb / 16), count);
		count += write (1, &BASISUP[nb % 16], 1);
		return (count);
		
}

int	ft_printhex(unsigned long int nb, int count)
{
		if (nb >= 16)
			count += ft_printhex((nb / 16, count);
		count += write (1, &BASISLOWER[nb % 16], 1);
		return (count);
}

