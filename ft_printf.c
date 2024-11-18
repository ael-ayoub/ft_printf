/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:48:27 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/11/18 16:30:22 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void    ft_separators(char sep, va_list args)
{
	if (sep == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (sep == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (sep == 'p')
		ft_putddr(va_arg(args, int *));
	else if (sep == 'd' || sep == 'i')
		ft_putnbr_fd(va_arg(args, const int), 1);
	else if (sep == 'x' || sep == 'X')
		ft_atoi_base(va_arg(args, int), sep);
	else if (sep == 'u')
		ft_putnbr_u((int)va_arg(args, int), 1);
	else if (sep == '%')
		ft_putchar_fd('%', 1);
	else
		ft_putchar_fd(sep, 1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;

	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
            if (is_digit(*str) == 1)
            {
                int n = ft_atoi(str);
            }
			ft_separators(*str, args);
		}
		else
		{
			ft_putchar_fd(*str, 1);
		}
		str++;
	}
	va_end(args);
	return (1);
}
