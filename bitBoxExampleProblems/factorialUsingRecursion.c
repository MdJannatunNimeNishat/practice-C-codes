#include<stdio.h>
int calFact(int num)
{
    if(num==1)
    {
        return 1;
    }
    else
    {
        return (num*calFact(num-1));
    }
}



int main()
{
    int num,fact=0;
    printf("Enter your number: ");
    scanf("%d",&num);
    fact = calFact(num);
    printf("%d! is %d",num,fact);
}
