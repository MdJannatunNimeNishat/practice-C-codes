#include<stdio.h>
int main()
{
    int arr1[3]={3,2,1};
    int arr2[3]={1,2,3};
    int arr3[3]={0,0,0};
    int i;
    for(i=0;i<3;i++)
    {
        arr3[i]=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=arr3[i];

    }
    for(i=0;i<3;i++)
    {
        printf("array1:%d\n",arr1[i]);

    }
    for(i=0;i<3;i++)
    {
        printf("\narray2:%d",arr2[i]);

    }
}
