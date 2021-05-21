#include<stdio.h>
int main()
{
    char s[5]="hello";
    char t[5];
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        t[i]=s[i];
    }
    printf("%s",t);
}
