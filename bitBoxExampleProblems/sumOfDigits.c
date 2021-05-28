#include<stdio.h>
int main()
{
    int n,num,sum=0,i,f;
    scanf("%d",&num);
    n=num;
    for(i=0;n>0;i++)
    {
        f= n%10;
        sum+=f;
        n=n/10;
    }
    printf("sum of the digits of this number is: %d",sum);
}
