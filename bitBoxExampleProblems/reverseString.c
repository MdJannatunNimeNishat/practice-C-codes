
#include<stdio.h>
//#include<string.h>
int main()
{
    char c[100];
    gets(c);
    int i;
    int ln = strlen(c);
    printf("%d",ln);
    for(i=ln-1;i>=0;i--)
    {
        printf("%c",c[i]);
    }
}

