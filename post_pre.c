#include <stdio.h>
int main()
{
	int a = 1, b = 1, a_post, b_pre;
	a_post = a++;
	b_pre = ++b;
	printf("a a_post b b_pre\n");
	printf("%1d %5d %2d %3d\n",a,a_post,b,b_pre);
	return 0;
}