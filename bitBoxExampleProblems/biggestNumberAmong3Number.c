#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter your Numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    int big = (num1>num2 && num1>num3)?num1:num2>num3?num2:num3;
    printf("Biggest number is: %d",big);
}
