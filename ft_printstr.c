/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <ifeli-bar@student.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 08:53:36 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/19 08:30:14 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printstr(char *str)
{	
	int	i;

	if (!str)
		return (ft_printstr("(null)"));
	i = 0;
	while (str[i])
	{
		ft_printchar(1, &str[i], 1);
		i++;
	}
	return (i);
}
