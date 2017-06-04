#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_printf(char *str, ...)
{
	va_list	var_list;
	va_start(var_list, str);
	char *str2 = va_arg(var_list, char*);
	write(1, str2, strlen(str2));
}