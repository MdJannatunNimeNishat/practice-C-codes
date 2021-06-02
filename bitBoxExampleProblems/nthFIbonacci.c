#include<stdio.h>
//1 1 2 3 5 8 13
int main()
{
    int i,a,b,fibo,c;
    int n;
    printf("Enter 1st value of fibonacci series: ");
    scanf("%d",&a);
    printf("Enter 2nd value of fibonacci series: ");
    scanf("%d",&b);
    printf("Enter the nth value of fibonacci series: ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=2;i<n;i++)
    {
        c = a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

}
