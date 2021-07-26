#include<stdio.h>

int increment(int *a)
{
    return a=a+1;
}



int main()
{
	int a,b;
	a=10;
	increment(&a);
	printf("%d",a);
}

