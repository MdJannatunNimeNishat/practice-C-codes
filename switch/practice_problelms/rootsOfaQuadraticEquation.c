//C program to find all roots of a quadratic equation using switch case
//ni7

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminant;
    float root1,root2;
    printf("Input a:");
    scanf("%lf",&a);
    printf("Input b:");
    scanf("%lf",&b);
    printf("Input c:");
    scanf("%lf",&c);

    discriminant = (b*b)-(4*a*c);
    //printf("%d",discriminant);
    switch(discriminant>0)
    {
    case 1:
        root1 = (-b + sqrt(discriminant))/(2*a);
        root1 = (-b - sqrt(discriminant))/(2*a);
    }
}
