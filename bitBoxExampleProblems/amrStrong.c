/*Armstrong number is a number that is equal to the sum of cubes of its digits.
For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.*/

/* 153 = (1*1*1)+(5*5*5)+(3*3*3)
where:
(1*1*1)=1
(5*5*5)=125
(3*3*3)=27
So:
1+125+27=153  */

#include<stdio.h>
#include <math.h>
int main()
{
    int i=0,orgNum,count=0,n,sum=0,f,m;
    float s;
    scanf("%d",&orgNum);
    n=orgNum;
    for(i=0;n>0;i++)
    {
        n=n/10;
        ++count;

    }
   // printf("number of digit: %d\n",count);
    m=orgNum;
    for(i=0;m!=0;i++)
    {
        f=m%10;
       // printf("%d\n",f);

        s=pow(f,count); //pow returns floating point number

       // printf("power: %f\n",s);

        sum=sum+s;

        m=m/10;

        //printf("sum is: %d\n",sum);

    }
    printf("sum is: %d\n",sum);

    if(sum==orgNum)
    {
        printf("amrStrong Number");
    }
    else
    {
        printf("Not a amrStrong Number");

    }

}
