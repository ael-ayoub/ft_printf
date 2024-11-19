#include "ft_printf.h"

int main()
{
	printf("origin --->   \n");

	//int j = printf("");


	int ij = ft_printf("%%c");
	printf("%d\n",ij);

	printf("_________________\n");

	int i = ft_printf("%%c");
	ft_printf("%d\n",i);

	printf("my_printf----->");
}
