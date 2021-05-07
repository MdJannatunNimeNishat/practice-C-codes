/*write a program to print number form 1 to 10 in such a way that when number is odd , add 1 and when
number is even subtract 1 */
//output: 2 1 4 3 6 5 8 7 10 9
#include<stdio.h>
int main()
{
   int i;
   for(i=1;i<=10;i++)
   {
       if(i%2==0)
       {
           printf("%d\t",i-1);
       }
       else
       {
           printf("%d\t",i+1);
       }
   }
}
