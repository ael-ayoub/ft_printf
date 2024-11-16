#include "libft.h"


void ft_putddr(void *address)
{
    unsigned long adr = (unsigned long)address;
    char hex[] = "0123456789abcdef";
    char tab[16];

    int i = 0;
    if (!adr)
    {
        ft_putstr_fd("(nil)",1);
        return ;
    }
    ft_putstr_fd("0x",1);
    while (adr > 0)
    {
        tab[i] = hex[adr % 16];
        adr /= 16;
        i++;
    }
    int j = i - 1;

    while(j >= 0)
    {
        ft_putchar_fd(tab[j],1);
        j--;
    }
}