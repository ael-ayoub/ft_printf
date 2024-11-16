#include "libft.h"

void ft_atoi_base(unsigned int i)
{
    char hex[16];
    char base[] = "0123456789abcdef";

    if (i == 0)
        ft_putchar_fd('0',1);
    int j = 0;
    while (i > 0)
    {
        hex[j] = base[i % 16];
        i /= 16;
        j++;
    }
    j--;
    while (j>= 0)
    {
        ft_putchar_fd(hex[j],1);
        j--;
    }
}