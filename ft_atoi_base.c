/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:48:18 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/11/18 10:30:31 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_atoi_base(unsigned int i, const char hx)
{
	char	hex[16];
	char	*base;
	int		j;

	if (hx == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (i == 0)
		ft_putchar_fd('0', 1);
	j = 0;
	while (i > 0)
	{
		hex[j] = base[i % 16];
		i /= 16;
		j++;
	}
	j--;
	while (j >= 0)
	{
		ft_putchar_fd(hex[j], 1);
		j--;
	}
}
