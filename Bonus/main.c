#include "ft_printf_bonus.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int mine, real;

	// + flag
	mine = ft_printf("ft: [%%+d] = [%+d]\n", 42);
	real = printf("og: [%%+d] = [%+d]\n", 42);
	printf("return: ft = %d | og = %d\n\n", mine, real);

	mine = ft_printf("ft: [%+d] [%+d]\n", -42, 0);
	real = printf("og: [%+d] [%+d]\n", -42, 0);
	printf("return: ft = %d | og = %d\n\n", mine, real);

	// space flag
	mine = ft_printf("ft: [% d] [% d]\n", 42, -42);
	real = printf("og: [% d] [% d]\n", 42, -42);
	printf("return: ft = %d | og = %d\n\n", mine, real);

	// + and space combined — + takes priority
	mine = ft_printf("ft: [%+ d]\n", 42);
	real = printf("og: [%+ d]\n", 42);
	printf("return: ft = %d | og = %d\n\n", mine, real);

	// # flag with x/X
	mine = ft_printf("ft: [%#x] [%#X]\n", 42, 42);
	real = printf("og: [%#x] [%#X]\n", 42, 42);
	printf("return: ft = %d | og = %d\n\n", mine, real);

	// # flag with 0
	mine = ft_printf("ft: [%#x] [%#X]\n", 0, 0);
	real = printf("og: [%#x] [%#X]\n", 0, 0);
	printf("return: ft = %d | og = %d\n\n", mine, real);

	// Edge cases
	mine = ft_printf("ft: [%+d] [% d] [%#x] [%#X]\n", INT_MAX, INT_MIN, UINT_MAX, UINT_MAX);
	real = printf("og: [%+d] [% d] [%#x] [%#X]\n", INT_MAX, INT_MIN, UINT_MAX, UINT_MAX);
	printf("return: ft = %d | og = %d\n\n", mine, real);

	return 0;
}

