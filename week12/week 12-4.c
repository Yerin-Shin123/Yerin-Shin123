#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){
	int i;
	int grade[5];
	int sum=0;
	int average;
	for(i=0; i<5; i++)
	{
		printf("Input value-grade[%i]=",i);
		scanf("%i",&grade[i]);
	}
	
	
    for(i = 0; i < 5; i++) 
    {
        printf("grade[%i]=%i\n",i, grade[i]);
        sum += grade[i];
	}
	
	average = sum / 5;
	printf("average: %i\n", average);

	return 0;
}
