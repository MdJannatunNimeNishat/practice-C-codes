#include<stdio.h>
int main()
{
    /*int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter your Binary value: ");
    scanf("%d")*/
    int arr[5]={1,1,1,1,0};
    int size= sizeof(arr[5]);
    int conv=0,i;
    int s=4;
    for(i=0;i<5;i++)
    {
        conv = conv+ arr[i]*(2^s);
        s--;
     //printf("%d\n",conv);
    }
    printf("%d",conv);

}
