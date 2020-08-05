#include <stdio.h>
#include <conio.h>

int main()
{
	int num,i;
	char sugges;
	printf("Enter any number whose Multiplication Table is to be printed: ");
	scanf("%d", &num);
	printf("The Table of %d is\n",num);
	for(i=1;i<=10;i++)
	{
		printf("%d X %d = %d\n", num,i,num*i);
	}
	return 0;
	getch();
}
