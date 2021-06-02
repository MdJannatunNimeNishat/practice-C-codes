#include<stdio.h>
int main()
{
    int num,i,r,rev=0;
    scanf("%d",&num);
    int n=num;
    for(i=0;n>0;i++)
    {
        r = n%10;
        rev=rev*10+r;
        n=n/10;
        //printf("%d",r);
    }
    printf("%d",rev);
}
