#include <stdio.h>
static int all_files;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

extern void sub();
int main(void)
{
	sub();
	printf("%d\n",all_files);
	return 0;
}
extern int all_files;
void sub(void)
{
	all_files=10;
}
