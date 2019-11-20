#include<stdio.h>
int calc(int a, int b);
int main()
{
	int area,a,b;
	printf("enter the two sides");
	scanf("%d %d",&a,&b);
	area=calc(a,b);
	printf("the area is = %d",area);
	return 0;
}
int calc(int a, int b)
{
	int c;
	c=a*b;
	return c;
}
