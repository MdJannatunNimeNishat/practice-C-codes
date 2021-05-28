/* A number is called strong number if sum of factorial of its digit is equal
to number itself. */


/*1! + 4! + 5! =145 */
#include<stdio.h>
int main()
{
    int num,i,f,n,fact=1,mfact=0,j;
    scanf("%d",&num);
    n=num;
    for(i=0; n>0; i++)
    {
        f= n%10;
        for(j=1; j<=f; j++)
        {
            fact=fact*j;
        }
        mfact=mfact+fact;
        fact=1;
        n=n/10;
    }
    if(mfact==num)
    {
        printf("%d is a strong number.",num);
    }
    else
    {
        printf("%d is not a strong number.",num);

    }

}
