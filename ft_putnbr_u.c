#include "libft.h"

void	ft_putnbr_u(int nb, int fd)
{
	unsigned int nbr = nb; 
    if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else
		ft_putchar_fd(nbr + 48, fd);
}
