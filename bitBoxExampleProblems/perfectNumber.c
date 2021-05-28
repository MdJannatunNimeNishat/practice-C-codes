/*In number theory, a perfect number is a positive integer that is equal to the sum of its
positive divisors, excluding the number itself. For instance, 6 has divisors 1, 2 and 3
(excluding itself), and 1 + 2 + 3 = 6, so 6 is a perfect number.*/

#include<stdio.h>
int main()
{
    int num,i,result=0;
    scanf("%d",&num);
    for(i=1;i<num-1;i++)
    {
        if(num%i==0)
        {
            result +=i;
        }
    }
   // printf("%d",result);
    if(result==num)
    {
        printf("%d is a perfect num",num);
    }
    else
    {
        printf("%d is not a perfect number",num);
    }
}
