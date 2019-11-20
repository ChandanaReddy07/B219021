#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("ENTER THE VALUES OF a,b,c OF THE QUADRATIC EQUATION")
	scanf("℅d℅d℅d",&a,&b,&c);
	double D=sqrt(b*b-4*a*c);
	if(D<0)
    printf("NO REAL ROOT EXISTS");
    if(a==0&&b!=0)
    {
int x= -(c/b);
printf("ONLY ONE REAL ROOT EXIST ℅d",x);
}
if(a==0&&b==0)
 printf("NO SOLUTION");
 return 0;
}

