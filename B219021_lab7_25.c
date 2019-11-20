#include <stdio.h> 

#include <conio.h>

int main()
{
   int number;


   printf("enter a number to find cube sum");

 
   scanf("%d", &number); 


   int n2,cube,cubesu=0;


   while(number!=0)
     {

        n2 = number%10;

        cube = n2*n2*n2;

        cubesu = cubesu + cube;

        number = number/10; 

      }

    printf("cube sum is %d\t", cubesu);
    getch();
    return 0 ;



}
