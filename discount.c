#include <stdio.h>
int main()
{
	int total;
	int number_people;
	printf("please enter the number of customers: ");
	scanf("%d",&number_people);
	if(300*number_people < 3000){
		total = 300 * number_people;
	}
	if(300*number_people >= 3000){
		total = 300 * number_people * 0.8;
	}
	printf("Total: %d\n",total);
	return 0;
}
