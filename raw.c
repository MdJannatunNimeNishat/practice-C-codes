/*
#include<stdio.h>
int main()
{
   char a= 'x';
    printf("%d\n",sizeof(6.5));
    printf("%d\n",sizeof(90000));
    printf("%d\n",sizeof("A"));
    printf("%d\n",sizeof('x'));
     //printf("\t%d\n\t",sizeof('x','y'));
      printf("%d\n",sizeof(a));*/
       //printf("%d\n",'a');
       //printf("%d\n","a");
    //   printf("%c\n",'97');
     //  int roll_no =10;

  /*  int i=10;
    printf("%d %d %d",i+ ++i+i++);
    in c = a
    //int _mysum=0;*/
/*int a=2,b=1,c=0;
  c = a +++ b;
  printf("%d %d %d",a,b,c);


}*/
#include<stdio.h>
int main()
{
/*int a=4, b=3;
printf("%d", a++ + ++b);*/
/*int a=10, b=10,c;
c= a+++++b;
  printf("%d %d %d",a,b,c);*/
  //int a=1, b=1,c=1;
//b= a++ + ++a + a++; // value bera jai + er pore a++ = 1, porer + e value 2 hoye gase.
//b = a+++b+++c;
//printf("a = %d\n", a);
//printf("b = %d\n", b);
/*int a=10;
int x = ++a + ++a;
printf("%d",x);*/
int *pc, c,d,**e;
int x[5]={5,3,2,7,6};
c= 5;
d= -15;
pc= &c;
e=&pc;
//pc=&d;
//printf("%d\n",*pc);
printf("%d\n",&c);
printf("%u\n",**e);
//printf("%d",*pc);
printf("%d\n",&x[0]);

printf("%d\n\n",*(x+1));
int x1[5]={3,2,1,4,6};
int *ptr;
ptr=&x1[2];
printf("%d\n",*ptr);
printf("%d\n",*ptr+1);
printf("%d\n",*(ptr+1));
printf("%d\n",*(ptr-1));


}
