#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6},i;
    //int arr[10],i;
   /* for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }*/
    int size = sizeof(arr)/sizeof(arr[0]);
    int large=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]>large)
        {
            large = arr[i];
        }
    }
    printf("large element is: %d\n",large);



//    int size = arr[arr.length()-1] - arr[0] +1;

    printf("number of element %d",size);
    printf("%d",arr)
}
