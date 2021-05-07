#include<stdio.h>
int main()
{
    int i,num=2;
    for(i=2;i<num;i++)
    {
        if(num%i==0){
            printf("not a prim number");
            break;
        }
        else{
            printf("a prim number");
            break;
        }
    }
}
