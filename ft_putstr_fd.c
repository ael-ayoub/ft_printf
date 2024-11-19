/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:40:33 by ael-aiss          #+#    #+#             */
/*   Updated: 2024/11/19 11:31:41 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	count;

	if (!*s)
		return (0);
	count = 0;
	i = 0;
	while (s[i])
	{
		count += ft_putchar_fd(s[i], fd);
		i++;
	}
	return (count);
}
