/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:32:20 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/20 11:07:56 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printhex(unsigned long nb, int flag)
{
    int i;

    i = 0;
    if (nb >= 16)
    {
        i += ft_printhex((nb / 16), flag);
        i += ft_printhex((nb % 16), flag);
    }
    else
    {
        if(flag == 'x')
            return (ft_printchar(BASISLW[nb]));
        else
            return (ft_printchar(BASISUP[nb]));
    }
    return (i);
}
