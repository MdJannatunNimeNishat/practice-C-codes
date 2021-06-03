#include<stdio.h>
int main()
{
    int arr[4]={4,5,6,7};
    int i,j,c=1;
    for(i=0;i<4;i++)
    {
        for(j=c;j<4;j++){
            printf("{%d,%d}",arr[i],arr[j]);
        }
        c++;

    }
}
