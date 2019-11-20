#include<stdio.h>
 main()
{
	int x;
	int c=0;
	int arr[13];
	for(int i =0;i<13;i++)
	arr[i]= scanf("℅d",&x);
    int k=arr[0];
	for(int i=1;i<13;i++)
{
	if(arr[i]>k)
	k=arr[i];
}
for(int i=0;i<13;i++)
{
	if(arr[i]==k)
	c++;
}
printf("The largest value is ℅d and it was entered ℅d times",k,c);
return 0;
}
