





#include "test.h"

void	test_binary()
{
	unsigned int			ui;
	unsigned char			uc;
	unsigned long long		ull;
	unsigned short			ush;

	ui = 42;
	uc = 'a';
	ull = 4200042000;
	ush = 42;

	char		c;
	short		sh;
	int			i;
	long long	ll;

	c = 'a';
	i = -42;
	ll = -4200042000;
	sh = -42;




	ft_putendl("\n\n * * * * * * * * * * Binary (00101010): * * * * * * * * * *");

	// UNSIGNED
	ft_putendl("\n\n * * * * * Unsigned:  * * * * *\n");

	ft_printf("Unsigned char  'a' is %hhbu.\n", uc);
	ft_printf("Unsigned short 42  is %hbu.\n", ush);
	ft_printf("Unsigned int   42  is %bu.\n", ui);
	ft_printf("Unsigned int   42  is %bu.\n", ui);
	ft_printf("Unsigned long long is %llbu.\n", ull);

	// SIGNED
	ft_putendl("\n\n * * * * * Signed:  * * * * *\n");
	ft_printf("Signed char  'a'   is %hhbd.\n", c);
	ft_printf("Signed char  -100  is %hhbd.\n\n", -100);
	ft_printf("Signed short -42   is %hbd.\n", sh);
	ft_printf("Signed short  42   is %hbd.\n\n", 42);
	ft_printf("Signed int   -42   is %bd.\n", i);
	ft_printf("Signed int    42   is %bd.\n\n", 42);
	ft_printf("Signed long long   is %llbd.\n", ll);
	ft_printf("Signed long long   is %llbd.\n", 4200042000);

	// MIN FIELD WIDTH
	ft_putendl("\n\n * * * * * Min field width:  * * * * *\n");

	ft_printf("Unsigned char  'a' is %68hhbu.\n", uc);
	ft_printf("Unsigned short 42  is %68hbu.\n", ush);
	ft_printf("Unsigned int   42  is %68bu.\n", ui);
	ft_printf("Unsigned long long is %68llbu.\n\n", ull);

	ft_printf("Signed char  'a'   is %68hhbd.\n", c);
	ft_printf("Signed short -42   is %68hbd.\n", sh);
	ft_printf("Signed int   -42   is %68bd.\n", i);
	ft_printf("Signed long long   is %68llbd.\n", ll);


	// ADJUST LEFT
	ft_putendl("\n\n * * * * * Adjust left:  * * * * *\n");

	ft_printf("Unsigned char  'a' is %-68hhbu.\n", uc);
	ft_printf("Unsigned short 42  is %-68hbu.\n", ush);
	ft_printf("Unsigned int   42  is %-68bu.\n", ui);
	ft_printf("Unsigned long long is %-68llbu.\n\n", ull);

	ft_printf("Signed char  'a'   is %-68hhbd.\n", c);
	ft_printf("Signed short -42   is %-68hbd.\n", sh);
	ft_printf("Signed int   -42   is %-68bd.\n", i);
	ft_printf("Signed long long   is %-68llbd.\n", ll);

	// MIN VALUE
	ft_putendl("\n\n * * * * * Min value:  * * * * *\n");

	ft_printf("Unsigned char      is %-68hhbu.\n", '\0');
	ft_printf("Unsigned short     is %-68hbu.\n", 0);
	ft_printf("Unsigned int       is %-68bu.\n", 0);
	ft_printf("Unsigned long      is %-68lbu.\n", 0);
	ft_printf("Unsigned long long is %-68llbu.\n\n", 0);

	ft_printf("Signed char        is %-68hhbd.\n", SCHAR_MIN);
	ft_printf("Signed short       is %-68hbd.\n", SHRT_MIN);
	ft_printf("Signed int         is %-68bd.\n", INT_MIN);
	ft_printf("Signed long        is %-68lbd.\n", LONG_MIN);
	ft_printf("Signed long long   is %-68llbd.\n", LLONG_MIN);

	// MAX VALUE 
	ft_putendl("\n\n * * * * * Max value:  * * * * *\n");

	ft_printf("Unsigned char      is %-68hhbu.\n", UCHAR_MAX);
	ft_printf("Unsigned short     is %-68hbu.\n", USHRT_MAX);
	ft_printf("Unsigned int       is %-68bu.\n", UINT_MAX);
	ft_printf("Unsigned long      is %-68lbu.\n", ULONG_MAX);
	ft_printf("Unsigned long long is %-68llbu.\n\n", ULLONG_MAX);

	ft_printf("Signed char        is %-68hhbd.\n", SCHAR_MAX);
	ft_printf("Signed short       is %-68hbd.\n", SHRT_MAX);
	ft_printf("Signed int         is %-68bd.\n", INT_MAX);
	ft_printf("Signed long        is %-68lbd.\n", 2147483647);
	ft_printf("Signed long long   is %-68llbd.\n", LLONG_MAX);

	// SIGNED ZERO
	ft_putendl("\n\n * * * * * Signed zero:  * * * * *\n");

	ft_printf("Signed char        is %-68hhbd.\n", 0);
	ft_printf("Signed short       is %-68hbd.\n", -0);
	ft_printf("Signed int         is %-68bd.\n", 0);
	ft_printf("Signed long        is %-68lbd.\n", -0);
	ft_printf("Signed long long   is %-68llbd.\n", 0);

}