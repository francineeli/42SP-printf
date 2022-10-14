/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:00:12 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/14 09:14:42 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"//verificar aqui o path

char	ft_printf(const char *str, ...)
{
	va_list list;
	int counter;

	if (!str)
		return (NULL);
	counter = 0;
	va_start(list, str)
	while (*str)
	{
		if(*str == %)
		{
			
			str++;
			counter = ft_flags_check(*str, list);
		}
		else
		{
			counter++;
			ft_putchar(*str);
		}
		str++;
	}
	va_end (list);
	return (counter);
}

int	ft_flags_check(char flag, va_list list)
{
	if (flag == 'c')
		return();
	if (flag == 's')
		return();
	if (flag == 'd' || flah == 'i')
		return ();
	if (flag == 'u')
		return ();
	if (flag == 'x' || 'X')
		return ();
	if (flag == 'p')
		return ();
	else
		return();
}

