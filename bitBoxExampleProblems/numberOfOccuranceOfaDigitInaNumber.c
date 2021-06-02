/*number Of Occurance Of a Digit Ina Number*/

#include<stdio.h>
int main()
{
    int num,digit,r,count=0;
    printf("Enter your Number: ");
    scanf("%d",&num);
    printf("Enter your digit: ");
    scanf("%d",&digit);
    //printf("%d %d",num,digit);
    int n=num;
    int i;
    for(i=0;n>0;i++)
    {
        r=n%10;         //12    [3]
        if(r==digit)
        {
           count ++;
        }
        n=n/10;
    }
    printf("\nnumber of occurence is: %d",count);
}
//1st one is better

/*#include<stdio.h>
int main()
{
    int digit,count=0;
    int i,size;
    printf("enter the size of your Number: ");
    scanf("%d",&size);
    int num[size];
    printf("enter your Number: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&num[i]);
    }

    printf("enter your digit: ");
    scanf("%d",&digit);
    for(i=0;i<size;i++)
    {
        if(digit==num[i])
        {
            count ++;
        }
    }
    printf("\n Occurace %d",count);
}*/
