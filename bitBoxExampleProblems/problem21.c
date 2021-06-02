/*write down a code that accepts I,n is integer and values as input, store all n integers
in an array called pairs and return all pairs where the summation of individuals pair=value
input               output
5                   {1,5},{7,-1}
1 7 -1 5 -7
6
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the array size: ");
    scanf("%d",&n);
    int pairs[n];
    printf("enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&pairs[i]);
    }
    /*for(i=0;i<n;i++)
    {
        printf("%d",pairs[i]);
    }*/

    int value;
    printf("Enter the value: ");
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(pairs[i]+pairs[j]==value)
            {
                printf("{%d,%d}",pairs[i],pairs[j]);
            }
        }
    }

}














