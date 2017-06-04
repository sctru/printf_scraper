#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void    ft_printf(char *str, ...)
{
	int			i = 0;
	int			x = 0;
    va_list    var_list;

	va_start(var_list, str);
	while (str[i])
	{
		char ch = str[i];
		if (ch == '%')
			x++;
            write(1, &ch, 1);
        i++;
    }
	printf("x = %d\n", x);
	while (x > 0)
	{
		printf("f0\n");
		printf("%ld\n", va_arg(var_list, long));
		printf("f1\n");
		x--;
	}
}

int main (void)
{
	// struct lconv * lc;
	// setlocale(LC_MONETARY, "en_US");
	// lc = localeconv();
	// lc->thousands_sep;
	//test_funct("123", "234", "345");	
	// char *test = "axe";
	// char c = 'x';
	// printf("%+ 10d", c);
	//printf("%hhd", c);
	//char	*test = "12345";
	//char	*test2 = "909090";
	// int		tint = 0;
	// size_t	ull =  2147483648;
	// size_t	ull2 = 9294967299;
	// printf("123%nzu, %zu\n", &tint, ull2);
	// printf("%zu", (unsigned long)tint);
	// printf("%hhd\n", c);
	// printf("%hd\n", x);
	// printf("%ld\n", y);
	// printf("%lld\n", z);
	// printf("%jd\n", y);
	// printf("%zd\n", 123);
	// printf("d%+.5d d%010d\n", (int)z, x);
	// printf("i%-+10i i% 10i\n", (int)z, x);
	
	// char	*string2 = "abcdefghijklmn";
	// short x = 62;
	// long y = 987;
	// long long z = 10451;
	// unsigned long ul = 711;
	// char c = 'c';
	// int a = 070;
	// unsigned int b = 0xFFFFF;
	// int g = 2147483648;
	
	ft_printf("%ld\n", 429496);
	ft_printf("%ld\n", 214748364);

}