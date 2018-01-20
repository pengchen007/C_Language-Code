#include <stdio.h>
int main()
{
	int answer = 5;
	int guess;
	printf("please guess a number: ");
	scanf("%d",&guess);
	if (guess > answer){
		printf("Too large!\n");
	}
	if (guess < answer){
		printf("Too small!\n");
	}
	if (guess == answer){
		printf("You Are Correct!\n");
	}
	return 0;
}
