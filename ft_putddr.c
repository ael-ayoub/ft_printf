/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putddr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:48:38 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/11/18 10:54:35 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putddr(void *address)
{
	unsigned long	adr;
	char			*hex;
	char			tab[16];
	int				i;
	int				j;

	adr = (unsigned long)address;
	hex = "0123456789abcdef";
	i = 0;
	if (!adr)
	{
		ft_putstr_fd("(nil)", 1);
		return ;
	}
	ft_putstr_fd("0x", 1);
	while (adr > 0)
	{
		tab[i] = hex[adr % 16];
		adr /= 16;
		i++;
	}
	j = i;
	while (j >= 0)
		ft_putchar_fd(tab[j--], 1);
}
