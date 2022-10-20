/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:52:14 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/20 10:49:01 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void len_nbr(char *num, int n, size_t size)
{
	num[size] = '\0';
	size--;
	if (n >= 0)
	{
		while (size)
		{
			num[size] = (n % 10) + '0';
			n = n / 10;
			size--;
		}
		num[size] = n + '0';
	}
	else
	{
		while (size)
		{
			num[size] = (n % 10) * -1  + '0';
			n = n / 10;
			size--;
		}
		num[size] = '-';
	}
}

int	ft_itoa(int nb)
{
	size_t	size;
	char	*result;
	int		aux;

	if (nb >= 0)
		size = 1;
	else
		size = 2;
	aux = nb / 10;
	while (aux)
	{
		size++;
		aux = aux / 10;
	}
	result = malloc(size + 1);
	if (!result)
		return (0x0);
	len_nbr(result, nb, size);
	ft_printstr(result);
	free(result);
	return (size);
}

