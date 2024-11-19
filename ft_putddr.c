/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putddr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:48:38 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/11/19 15:44:05 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putddr(void *address)
{
	unsigned long	adr;
	char			*hex;
	char			tab[16];
	int				i;
	int				count;

	count = 0;
	adr = (unsigned long)address;
	hex = "0123456789abcdef";
	i = 0;
	if (!adr)
	{
		count = ft_putstr_fd("(nil)", 1);
		return (count);
	}
	count += ft_putstr_fd("0x", 1);
	while (adr > 0)
	{
		tab[i++] = hex[adr % 16];
		adr /= 16;
	}
	while (--i >= 0)
		count += ft_putchar_fd(tab[i], 1);
	return (count);
}
