/*A palindromic number is a number whose spelling is unchanged when its letters
are reversed. ex: 121*/

#include<stdio.h>
int main()
{
    int num,rev=0,n,i,f=0;
    scanf("%d",&num);
    n=num;
    for(i=0;n>0;i++)
    {
        f=n%10;
        rev=rev*10+f;
        n=n/10;
    }
    if(rev==num)
    {
        printf("%d is a palindrome number",num);
    }
    else
    {
         printf("%d is not a palindrome number",num);
    }
}
