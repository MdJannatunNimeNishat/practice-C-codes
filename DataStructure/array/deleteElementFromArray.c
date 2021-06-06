#include<stdio.h>
#include<string.h>

void deleteing(char ar[],int length, char element)
{
   int i,j;
    for(i=0;i<length;i++)
    {
        if(ar[i]==element)
        {
            break;
        }
    }
    if(i<length)
    {
        length--;
        for(j=i;j<length;j++)
        {
            ar[j]=ar[j+1];
        }
    }

    for(j=0;j<length;j++)
        {
            printf("%c",ar[j]);
        }
}



int main()
{
    char ar[5]={'g','e','t','s'};
    int length = strlen(ar);
    int i;
    char element;
    for(i=0;i<length;i++)
    {
        printf("%c",ar[i]);
    }
    printf("\nEnter the character u want to delete: ");
    scanf("%c",&element);
    deleteing(ar,length,element);
}
