#include "ft_printf.h"

/*

For p format:
Error in test 1: ft_printf("%p", ""): returned: 12, but expected: 11
Error in test 1: ft_printf("%p", ""): different memory

*/




int main()
{
	int x =printf("%p", (void *)-14523);

	printf("\n%d",x);


	printf("\n\n\n****************************\n\n\n");

	x = ft_printf("%p", (void *)-14523);
	ft_printf("\n%d",x);


}
