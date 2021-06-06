#include<stdio.h>
int main()
{
    int n,i,temp=0,j;
    printf("Enter the size of your array: ");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        printf("enter your %d th element: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1]){
                temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("2nd largest element is: %d",arr[n-2]); // array index starts with 0

}
