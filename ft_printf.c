int main (int argc, char **argv)
{
	va_list	var_list;
	char *str = va_arg(var_list, char*);
	write(1, str, strlen(str));
}