//C program to create calculator using switch case and functions
//Write a C program to create menu driven calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and functions
//ni7

#include<stdio.h>
int main()
{
    //int num1,num2,result;
    float num1,num2,result;
    char sign;
    printf("Enter your numbers and operator(1+1): ");
    scanf("%f",&num1);
    scanf("%c",&sign);
    scanf("%f",&num2);
    // printf("%d %c %d",num1,sign,num2);
    switch(sign)
    {
    case '+':
        //printf("%d + %d ",num1+num2);
        result= num1+num2;
       // printf("%d",result);
        break;
    case '-':
        //printf("%d + %d ",num1+num2);
        result= num1-num2;
       // printf("%d",result);
        break;
    case '*':
        //printf("%d + %d ",num1+num2);
        result= num1*num2;
       // printf("%d",result);
        break;
    case '/':
        //printf("%d + %d ",num1+num2);
        result= num1/num2;
      //  printf("%d",result);
        break;
    default:
        printf("Invalid");
        break;

    }
    printf("%.2f",result);

}
