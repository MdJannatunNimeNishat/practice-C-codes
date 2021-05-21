#include<stdio.h>

int input( char str[], int n)
{
    int ch,i=0;
    printf("Enter your word:");
    while((ch = getchar()) != '\n') // getchar() takes one character at a time and return ascii code of that character.That why we declear ch as int not char
    {
        if(i<n)
        {
            str[i++]=ch;
        }
    }
    str[i]='\0';
    return i;
}


int main()
{
    char str[100];
    int n = input(str, 5);
    printf("%d %s",n, str);

}
