/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:00:12 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/19 15:43:49 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_flags_check(char flag, va_list list);

char	ft_printf(const char *str, ...)
{
	va_list	list;
	int		counter;

	if (!str)
		return (-1);
	counter = 0;
	va_start(list, str);
	while (*str)
	{
		if (*str == '%')
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
		return (ft_printchar(va_arg(list, int)));
	if (flag == 's')
		return (ft_printstr(va_arg(list, char *)));
	if (flag == 'd' || flag == 'i')
		return (ft_itoa(va_arg(list, int)));
	if (flag == 'u')
		return (ft_utoa(va_arg(list, unsigned int)));
	if (flag == 'X')
		return (ft_printuphex(va_arg(list, unsigned long int)));
	if (flag == 'x')
		return (ft_printlwhex(va_arg(list, unsigned long int)));
	if (flag == 'p')
		return (ft_printptr(va_arg(list, unsigned long int)));
	else
		return (ft_putchar(flag));
}
