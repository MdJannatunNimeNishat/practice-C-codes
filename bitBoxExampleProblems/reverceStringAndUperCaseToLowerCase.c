#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }

    }
    int ln= strlen(s);
    char temp;
    for(i=0;i<ln;i++)
    {
       // swap(s[i],s[ln-1]);
       temp=s[i];
       s[i]=s[ln-i-1];
       s[ln-i-1]=temp;

    }

    for(i=0;i<strlen(s);i++)
    {
        printf("%c",s[i]);
    }
}
