#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	
	printf("Enter an integer:");
	scanf("%i",&x);
	
	if(x>0)
	 printf("%i\n",x);
	 
	else if(x<0)
	 printf("%i\n",-x);
	 
	else
	 printf("%i\n",x);
	
	return 0;
}
