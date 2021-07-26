#include<stdio.h>
int main()
{
	int a=1025;
	int *p;
	p=&a;
	*p=6;
	int **q;
	q=&p;
	int ***r;
	r=&q;
	printf("a= %d\n",&a);
	printf("p= %d\n",p);
	printf("**q= %d\n",**q); // **p and *(*P) is same
	printf("*(*r)= %d\n",*(*r));
	printf("*(*(*r))= %d\n",*(*(*r)));
}
