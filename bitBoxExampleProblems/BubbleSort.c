#include<stdio.h>
int main()
{
    int n,i,j,temp=0;
    printf("Enter how many elements do u have: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
         printf("Enter your %d th element: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);

    }
}
