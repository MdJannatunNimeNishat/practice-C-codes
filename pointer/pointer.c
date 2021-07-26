#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("address of p= %d",p);
    *p=9;
    printf("\n value of p= %d",*p);
    int b=20;
    *p=b;
    printf("\naddress of p= %d",p);
    printf("\nvalue of  p= %d",*p);

    /*int ar[]={6,7,8,9,0,1,2,3,4,5,6};
    int *p = ar+5;
    printf("%d",p[1]);*/


}
