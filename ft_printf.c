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
                str++;
            }
            else if (*str == 's')
            {
                ft_putstr_fd(va_arg(args, char *), 1);
                str++;
            }
            else if (*str == 'p')
            {
                ft_putddr(va_arg(args, int *));
                str++;
            }
            else if (*str == 'd' || *str == 'i')
            {
                ft_putnbr_fd(va_arg(args,const int), 1);
                str++;
            }
            else if (*str == 'u')
            {
                ft_putnbr_u((int)va_arg(args, int), 1);
                str++;
            }
            else if (*str == 'x' || *str == 'X')
            {
                ft_atoi_base(va_arg(args, int), *str);
                str++;
            }
            else if (*str == '%')
            {
                ft_putchar_fd('%', 1);
                str++;
            }
            // else
            // {
            //     ft_printf("unknown conversion type character ‘%c’ in format", *str);
            //     break;
            // }
        }
        else
        {
            ft_putchar_fd(*str, 1);
            str++;
        }
    }
    va_end(args);
    return 1;
}

int main()
{
    // char *str = "ffdjhfdhjfd";
   
    ft_printf("%t",3747);
}