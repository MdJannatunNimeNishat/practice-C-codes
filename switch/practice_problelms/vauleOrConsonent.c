//C program to check vowel or consonant using switch case
//ni7

#include<stdio.h>
int main()
{
    char checker;
    printf("Enter your character(a-z):");
    scanf("%c",&checker);
    switch(checker)
    {
    case 'a':
        printf("'a' is vowel");
        break;
    case 'e':
        printf("'e' is vowel");
        break;
    case 'i':
        printf("'i' is vowel");
        break;
    case 'o':
        printf("'o' is vowel");
        break;
    case 'u':
        printf("'u' is vowel");
        break;
    default:
        printf("%c is a consonant", checker);
        break;
    }


}
