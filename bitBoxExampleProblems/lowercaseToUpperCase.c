#include<stdio.h>
#include<string.h>
int main()
{
    //char s[8] = "mr.adon";
    char s[100];
    int i;
    /*int size;
    printf("Enter the size of the string: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%c",&s[i]);
    }*/
    printf("Enter the string: ");
    gets(s);
    int ln = strlen(s);
   // printf("%d",ln);
   for(i=0;i<ln;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }


    for(i=0;i<ln;i++)
    {
        printf("%c",s[i]);
    }

}
