#include<stdio.h>
int main()
{
    float num;
    printf("enter your Number: ");
    scanf("%f",&num);
    float check = num==0?printf("Zero"):num<0?printf("Negative number"):printf("Positive number");

}
