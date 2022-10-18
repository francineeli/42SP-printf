/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:08:30 by feli-bar          #+#    #+#             */
/*   Updated: 2022/10/18 17:51:29 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

# define BASISUP "0123456789ABCDEF"
# define BASISLOWER "0123456789abcdef"

char	ft_printf(const char *str, ...);
int	ft_printchar(int count);
int	ft_printstr(char *str);
int	ft_printheX(unsigned long int nb, int count);
int	ft_printhex(unsigned long int nb, int count);
int	ft_printptr(unsigned long int ptr);
int	*ft_itoa(int n);
int	*ft_utoa(int n);

#endif
