#include<stdio.h>
int f(int num)
{
    int n,i,f,sum=0,count=0;
    n=num;
    for(i=0;n>0;i++)
    {
        f=n%10;
        sum+=f;
        n=n/10;
       // count++;
    }
    //printf("%d",sum);
    return sum;
   /* int m;
    m=sum;
    for(i=0;m>0;i++)
    {
      //count++;
        m=m/10;
        count++;
    }
    //printf("\n%d",count);
    return count;*/
}


int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    int call=0;
    call = f(num);
    printf("%d",call);
    int i,f,sum=0,count=0;
    int m;
    m=call;
    for(i=0;m>0;i++)
    {
      //count++;
        m=m/10;
        count++;
    }
    //printf("\n%d",count);
    if(count!=1)
    {
        num =call;
        f(num);
    }


}
