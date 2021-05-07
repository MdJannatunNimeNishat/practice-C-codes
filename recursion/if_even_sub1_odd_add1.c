/*write a program to print number form 1 to 10 in such a way that when number is odd , add 1 and when
number is even subtract 1 */
//output: 2 1 4 3 6 5 8 7 10 9

#include<stdio.h>

int odd(int n)
{
    //int n=1;
    if(n<=10)
    {
        printf("%d\t",n+1);
        n++;
        even(n);
    }
    else{
        return;
    }
}

int even(int n)
{
    if(n<=10)
    {
        printf("%d\t",n-1);
        n++;
        odd(n);
    }
    else{
        return;
    }
}



int main()
{
    int n=1;
    odd(n);
    return 0;
}
