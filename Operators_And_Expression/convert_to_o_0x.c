//convert decimal into octal and hexadecimal
#include<stdio.h>
int main(void)
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Octal - %o, Hexadecimal - %x\n",n,n);
	return 0;
}