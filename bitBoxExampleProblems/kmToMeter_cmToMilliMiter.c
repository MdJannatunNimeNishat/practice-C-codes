#include<stdio.h>
int main()
{
    float num,meter,cm,mili;
    char c;
    printf("choose your option \n 'A'for km to meter \n 'B' for CM \n 'C' for Mili: ");
    scanf("%c",&c);
    printf("Enter your value: ");
    scanf("%f",&num);
    switch(c)
    {
    case 'A':
        {
            meter= num*1000;
            printf("%f",meter);
            break;
        }
    case 'B':
        {
            cm = num*100000;
            printf("%f",cm);
            break;
        }
    case 'C':
        {
            mili= num*1000000;
            printf("%f",mili);
            break;
        }
    default:
        {
            printf("Invalid!!!");
        }
    }
}
