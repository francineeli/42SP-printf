/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:14:53 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/17 16:08:30 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static	int	absolute(int n)
{
	if (n < 0)
	n = n * (-1);
	return (n);
}

static	void	convert(char *num, int n, size_t size)
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
			num[size] = absolute(n % 10) + '0';
			n = n / 10;
			size--;
		}
		num[size] = '-';
	}
}

int	*ft_itoa(int nb)
{
	size_t	size;
	char	*num;
	int		aux;

	if (n >= 0)
		size = 1;
	else
		size = 2;
	aux = n / 10;
	while (aux)
	{
		size++;
		aux = aux / 10;
	}
	num = (char *)malloc(size + 1);
	if (num == NULL)
		return (NULL);
	else
		convert(num, n, size);
	return (num);
}

int		*ft_utoa(unsigned int nb)
{
	size_t	size;
	char	*num;
	int		aux;

	if (n >= 0)
	{
		size = 1;
		aux = n / 10;
	}
	else
		return (ft_printstr("(null)"));
	while (aux)
	{
		size++;
		aux = aux / 10;
	}
	num = (char *)malloc(size + 1);
	if (num == NULL)
		return (NULL);
	else
		convert(num, n, size);
	return (num);
}
