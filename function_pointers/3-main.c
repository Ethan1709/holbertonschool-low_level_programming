#include "3-calc.h"

/**
 *
 */

int main(int argc, char *argv[])
{
	int res, int num1, int num2;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
        num2 = atoi(argv[3]);
        s = argv[2];

	if (s == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*s == '/' || *s == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = (*get_op_func)(s)(num1, num2);
	printf("%d\n", res);
	return (0);
}


