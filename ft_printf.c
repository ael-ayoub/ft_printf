/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:48:27 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/11/19 11:18:54 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_separators(char sep, va_list args)
{
	int	count;

	count = 0;
	if (sep == 'c')
		count += ft_putchar_fd(va_arg(args, int), 1);
	else if (sep == 's')
		count += ft_putstr_fd(va_arg(args, char *), 1);
	else if (sep == 'p')
		count += ft_putddr(va_arg(args, int *));
	else if (sep == 'd' || sep == 'i')
		count += ft_putnbr_fd(va_arg(args, const int), 1);
	else if (sep == 'x' || sep == 'X')
		count += ft_atoi_base(va_arg(args, int), sep);
	else if (sep == 'u')
		count += ft_putnbr_u((int)va_arg(args, int), 1);
	else if (sep == '%')
		count += ft_putchar_fd('%', 1);
	else
		count += ft_putchar_fd(sep, 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	va_start(args, str);
	count = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += ft_separators(*str, args);
		}
		else
		{
			count += ft_putchar_fd(*str, 1);
		}
		str++;
	}
	va_end(args);
	return (count);
}
