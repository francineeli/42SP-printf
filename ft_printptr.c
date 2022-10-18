/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:48:41 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/18 17:50:51 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printptr(unsigned long int ptr)
{
	int count;

	count = 0;
	if (!ptr)
	{
		count += write (1, "(null)", 6);
		return (count);
	}
	else
	{
		count += write (1, "0x", 2);
		count += ft_printhex(ptr, 0);
	}
	return (count);
}

