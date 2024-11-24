#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	FILE*file;
	char c;
	
	file=fopen("sample.txt","r");
	if(file==NULL){
		printf("can't open a file.");
	    return 1;
	}
	  
	while((c = fgetc(file)) !=EOF){
	   putchar(c);	
	}
	  
	fclose(file);
	return 0;
}

/*#include <stdio.h>

int main (){
	FILE*file;
	char word[50];
	
	file=fopen("sample.txt","r");
	{f(file==NULL){
		printf("can't open a file.'");
		return 1;
	}
	while(fscanf(file, "%s",word)!=EOF){
		printf("%s\n",word);
	}
	fclose(file);
	return 0;
	
}
*/

