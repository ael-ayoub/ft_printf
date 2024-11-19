/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:40:30 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/11/18 20:11:32 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(long nbr, int fd)
{
	int		count;

	count = 0;
	if (nbr < 0)
	{
		count += ft_putchar_fd('-', fd);
		nbr *= -1;
		count += ft_putnbr_fd(nbr, fd);
	}
	else if (nbr > 9)
	{
		count += ft_putnbr_fd(nbr / 10, fd);
		count += ft_putnbr_fd(nbr % 10, fd);
	}
	else
		count += ft_putchar_fd(nbr + 48, fd);
	return (count);
}
