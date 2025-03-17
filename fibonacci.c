//program to generate fibonacci sequence
#include<stdio.h>
int main ()
{
    int n,t1=0,t2=1,i=2,nextterm;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("fibonacci sequence :%d",t1);
    }
    else 
    {
        printf("fibonaci sequence :%d%d",t1,t2);
        while(i<n)
        {
            nextterm=t1+t2;
            printf("%5d",&nextterm);
            t1=t2;
            t2=nextterm;
            i++;
        }
    } printf("\n");
      return 0;
}