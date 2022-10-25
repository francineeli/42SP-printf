/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:08:30 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/25 11:03:13 by feli-bar         ###   ########.fr       */
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
int		ft_printc(int count);
int		ft_prints(char *str);
int		ft_printx(unsigned long nb, int check);
int		ft_printp(unsigned long ptr);
int		ft_printi(int nb);
int		ft_printu(unsigned int nb);

#endif
