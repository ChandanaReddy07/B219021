#include<stdio.h>
#define MAX 20 

/*	function	:	readArray() 
	to read array elements. 
*/ 

void 	readArray(int a[],int size) 
{ 
	int i; 
	for(i=0;i< size;i++) 
	{ 
		printf("Enter %d element :",i+1); 
		scanf("%d",&a[i]); 
	} 
} 

/*	function	: printArray() 
	to print array elements. 
*/ 
void printArray(int a[],int size) 
{ 
	int i; 
	for(i=0;i < size; i++) 
		printf("%5d",a[i]); 
} 

/*	function	: reverseArray(), 
	to reverse array elements. 
*/ 
void	reverseArray(int a[],int size) 
{ 
	int i,temp; 
	for(i=0;i < size/2; i++) 
	{ 
		temp=a[i]; 
		a[i]=a[((size-1)-i)]; 
		a[((size-1)-i)]=temp; 
	} 
} 

int main() 
{ 
	int arr[MAX]; 
	int n,item,pos; 


	printf("\nEnter size of an Array :"); 
	scanf("%d",&n); 

	printf("\nEnter elements of Array 1:\n"); 
	readArray(arr,n); 
	 
	printf("\nArray elements before reverse :\n"); 
	printArray(arr,n); 

	/* reverse array elements*/ 
	reverseArray(arr,n); 
	printf("\nArray elements After reverse :\n"); 
	printArray(arr,n); 

	printf("\n\n"); 
	return 0; 
} 
