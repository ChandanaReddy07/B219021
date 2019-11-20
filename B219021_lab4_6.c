#include<stdio.h>
int main()
{
int ch;
int a[5];
printf("ENTER FIVE NUMBERS");
for(int i=0;i<5;i++)
scanf("%d",&a[i]);
printf("ENTER YOUR CHOICE: 1 FOR SUM,2 FOR SMALLEST,3 FOR LARGEST,4 FOR AVERAGE");
scanf("%d",&ch);
int sum=0;
int l=a[0];
int s=a[0];
double avg=0.0;
switch(ch)
{
case 1:
        for(int i=0;i<5;i++)
        sum+=a[i];
        printf("SUM=%d",sum);
        break;
case 2:
       for(int i=1;i<5;i++)
       {
       if(a[i]<s)
       s=a[i];
       }
       printf("SMALLEST NUMBER=%d",s);
       break;
case 3:
       for(int i=1;i<5;i++)
       {
       if(a[i]>l)
       l=a[i];
       }
       printf("LARGEST NUMBER=%d",l);
       break;
case 4:

       for(int i=1;i<5;i++)
       {
       sum+=a[i];
       }
       avg=sum/5;
       printf("AVERAGE=%f",avg);
       break;
default:printf("INVALID CHOICE");break;
}
return 0;
}





