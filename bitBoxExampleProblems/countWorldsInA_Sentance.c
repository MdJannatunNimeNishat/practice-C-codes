
#include<stdio.h>
//#include<string.h>
int main()
{
    char c[100];
    gets(c);
    int i,count=0;
    int ln = strlen(c);
    //printf("%d",ln);
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]==' ' || c[i]=='\n' || c[i]=='\t' )
        {
            count++;
        }
    }
    printf("%d",count+1);
}

