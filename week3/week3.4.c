#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float num1;
	float num2;
	
	printf("enter two integers:");
	scanf("%f,%f",&num1,&num2);
	
	printf("%f/%f= %f",num1,num2,num1/num2);
	

	
	return 0;
}
