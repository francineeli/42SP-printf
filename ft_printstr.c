/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <ifeli-bar@student.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 08:53:36 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/17 09:09:39 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printstr(char *s)
{
		
		int i;

		if (!s)
				return (ft_printstr("(null)"));	
		i = 0;
		while (s[i])
		{
				ft_printchar(1, &s[i], 1);
				i++;
		}
		return(i);
}

