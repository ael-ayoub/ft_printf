//%c, %s, %p, %d, %i, %u, %x, %X, and %%.
#include "ft_printf.h"
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
                ft_putchar_fd(va_arg(args, int),1);
            }
            else if (*str == 's')
            {
                ft_putstr_fd(va_arg(args, char *),1);
            }
            else ft_putchar_fd(*str,1);
            
            // if(*str == "p")
            // if(*str == "i")
            // if(*str == "u")
            // if(*str == "x")
        }
        str++;
    }
    va_end(args);
    return 1;
}

int main()
{
    // char *str = "ffdjhfdhjfd";
    printf("%s",'c');
}