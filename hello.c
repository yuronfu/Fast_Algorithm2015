#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	char name[100]="andylee830914",copy[5]="",test;

	printf("Hello andylee830914!\n");
	printf("%d\n",9+14);                 /* print integer*/
	printf("%.8f\n",1.414+3.14159);       /* print float*/
	printf("%d+%di\n",3,4);
	printf("My name is %s.\n",name);

	strncpy(copy,name,4);
	printf("%s\n",copy);
	printf("%d\n",copy[3]);

	test = 89;
	printf("%c\n",test);
 
	return 0;
}
