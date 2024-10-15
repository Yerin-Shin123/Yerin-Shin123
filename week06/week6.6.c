#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=50;
	int a;
	int t;
	
	do{
		printf("Guess a number:");	
		scanf("%i",&a);
		t++;
		
		if(a<50){
			printf("Low!\n");
		}
		
		else if(a>50){
			printf("High!\n");
		}
		
		else
		 {
		 	printf("Congratulation! Trial: %i",t);
		 }
	}while(a!=50);
	

	return 0;
}
