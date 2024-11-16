//%c, %s, %p, %d, %i, %u, %x, %X, and %%.
#include "libft.h"

int ft_printf(const char *str, ...)
{
    va_list args;

    va_start(args, str);
    while (*str)
    {
        if (*str == '%')
        {
            str++;
            if (*str == 'c')
            {
                ft_putchar_fd(va_arg(args, int), 1);
            }
            else if (*str == 's')
            {
                ft_putstr_fd(va_arg(args, char *), 1);
            }
            else if (*str == 'p')
            {
                ft_putddr(va_arg(args, int *));
            }
            else if (*str == 'd' || *str == 'i')
            {
                ft_putnbr_fd(va_arg(args, int), 1);
            }
            else if (*str == 'u')
            {
                ft_putnbr_u((int)va_arg(args,int), 1);
            }
            else if (*str == 'X')
            {
                ft_putnbr_fd(va_arg(args, int), 1);
            }
            else if (*str == 'x')
            {
                ft_atoi_base(va_arg(args, int));
            }
            else if (*str == '%')
            {
                ft_putchar_fd(va_arg(args, int), 1);
            }
            else
                ft_putchar_fd(*str, 1);
        }
        str++;
    }
    va_end(args);
    return 1;
}

int main()
{
    // char *str = "ffdjhfdhjfd";
    int c = 10;
    c++;
    ft_printf("%u",4294967295566);
}