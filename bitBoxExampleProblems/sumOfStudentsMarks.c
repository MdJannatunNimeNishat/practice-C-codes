#include<stdio.h>
int main()
{
    int num,snum,avg=0,i,sum=0;
    printf("Enter total number of student: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("enter %d st student number: ",i);
        scanf("%d",&snum);
        sum+=snum;
    }
    int avg1 = sum/num;
    printf("\n avg1 %d",avg1);
}
