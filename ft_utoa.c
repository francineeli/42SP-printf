/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:29:10 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/17 09:30:58 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		*ft_itoa(unsigned int n)
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

