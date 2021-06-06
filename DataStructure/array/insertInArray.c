
#include<stdio.h>
#include<string.h>
int main()
{
    char ar[10];
    gets(ar);
    int i,count=0;
    for(i=0;i<strlen(ar);i++)
    {
        if(ar[i]>='A' && ar[i]<='Z' || ar[i]>='a' && ar[i]<='z' || ar[i] == ' ' || ar[i]>=48 && ar[i]<=57 )
        {
            count ++;
        }
        //printf("%c",ar[i]);
    }
    printf("%d",count);
    int loc=0;
    //char value='e';
   //  char value;
   char value;
   printf("Enter your value: ");
    scanf("%c",&value);
    printf("Enter the location u want to inset your value: ");
    scanf("%d",&loc);

    //gets(value);
    for(i=count; i>=loc;i--)
    {
        ar[i+1]=ar[i];
    }

    ar[loc]=value;

    for(i=0; i<=strlen(ar);i++)
    {
        printf("%c",ar[i]);
    }
}

//programmingsimplified.com
/*
#include <stdio.h>

int main()
{
   int array[100], position, c, n, value;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &position);

   printf("Enter the value to insert\n");
   scanf("%d", &value);

   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];

   array[position-1] = value;

   printf("Resultant array is\n");

   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);

   return 0;
}

*/
