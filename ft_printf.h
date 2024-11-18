/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:48:03 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/11/18 15:34:12 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
#include <limits.h>

int		ft_printf(const char *str, ...);
void	ft_print_address(void *address);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_atoi_base(unsigned int i, const char xh);
void	ft_putnbr_u(int nbr, int fd);
void	ft_putddr(void *address);

#endif
