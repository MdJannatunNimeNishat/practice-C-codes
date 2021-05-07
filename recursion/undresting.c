#include<stdio.h>

int fun(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        //return 7 + fun(n-2);
        return n * fun(n-1);
    }
}

int main()
{

    printf("%d",fun(5));
    return 0;
}
