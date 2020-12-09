//calculate area and perimeter of a circle
#include<stdio.h>
int main(void)
{
	float r,area,perimeter;
	printf("Enter radius of the circle : ");
	scanf("%f",&r);
	area = 22.0/7 * r * r;//pi*r^2
	perimeter = 2 * 22.0/7 * r;//2*pi*r
	printf("Area=%f, Perimeter=%f\n",area,perimeter);
	return 0;
}