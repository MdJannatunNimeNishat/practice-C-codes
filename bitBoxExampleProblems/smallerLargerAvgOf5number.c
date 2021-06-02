#include<stdio.h>
int main()
{
    int ar[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter your %d th number: ",i+1);
        scanf("%d",&ar[i]);

    }
    int max=ar[0],min=ar[0],avg=0,sum=0;
    for(i=0;i<5;i++)
    {
        if(max<ar[i])
        {
            max=ar[i];
        }
        if(min>ar[i])
        {
            min=ar[i];
        }
        sum=sum+ar[i];
    }
    //avg=sum/(i+1);
    avg=sum/5;
    printf("Max: %d",max);
    printf("\nMin: %d",min);
    printf("\nAvg: %d",avg);


}
