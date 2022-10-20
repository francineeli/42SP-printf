/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:08:30 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/20 11:04:36 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

# define BASISUP "0123456789ABCDEF"
# define BASISLW "0123456789abcdef" 

int		ft_printf(const char *str, ...);
int		ft_printchar(int count);
int		ft_printstr(char *str);
int		ft_printhex(unsigned long nb, int check);
int		ft_printptr(unsigned long ptr);
int		ft_itoa(int nb);
int		ft_utoa(unsigned int nb);

#endif
