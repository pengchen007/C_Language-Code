#include <stdio.h>
int main()
{
	int num = 1;
	while (num < 21)
	{
		printf("%4d %10d\n", num, num*num);
		num = num + 1;
	}
	return 0;
}