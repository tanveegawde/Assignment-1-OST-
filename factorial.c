//program to generate factorial of a given number
#include<stdio.h>
int main ()
{
    int factorial=1,i,n;
    printf("enter an integer value : ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Invalid input ! input a positive number : ");
    }
    else if(n==0)
    {
        printf("factorial of %d is %d",n,factorial);
    }
    else
  {




    for(i=1;i<=n;i++)
     {
        factorial=factorial*i;
     }
    {  
        printf("factorial of %d is %d ",n,factorial);
    }
  }
}