#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[100];
	float grade;
};
int main(void){
	struct student s1 = {2415240, "shinyerin", 4.3};
	
	printf("ID: %d\n", s1.ID);  
    printf("name: %s\n", s1.name);         
    printf("grade: %f\n", s1.grade);      

    return 0;
}
