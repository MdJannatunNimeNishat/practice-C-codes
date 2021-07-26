#include<stdio.h>
int main()
{
	int a=1025;
	int *p;
	p=&a;
	void *p0; //void pointer - genric pointer
	p0=p;
	printf("Address= %d",p0);
}
