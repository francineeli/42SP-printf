/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeputchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:29:11 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/13 16:26:02 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

char	ft_printf(const char *str, ...)
{
		va_list list;

		va_start(list, str);
	 	if (*str != '\0')
		{
				char *t = va_arg(list, char *);
				write (1, &t, 1);
				str++;
		}
		va_end(list);
		return (0);
}

int main()
{
	char *line = "Socorro";
	ft_printf(line);
	return 0;
}
