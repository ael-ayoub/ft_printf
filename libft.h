#ifndef LIBFT_H
#define LIBFT_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_printf(const char *str, ...);
void ft_print_address(void *address);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_atoi_base(unsigned int i);
void ft_putnbr_u(int nbr, int fd);
void ft_putddr(void *address);

#endif