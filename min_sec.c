#include <stdio.h>
#define SEC_PER_MIN 60
int main()
{
	int sec, min, left;
	printf("Convert second to minutes and second!\n");
	printf("Enter the number of second (<=0 to quit):\n");
	scanf("%d",&sec);
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;
		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
		printf("Enter next value (<= 0 to quit):\n");
		scanf("%d", &sec);
	}
	return 0;
}