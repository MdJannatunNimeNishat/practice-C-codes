//1+(1+2)+(1+2+3).....+(1+2+3+..+n)


#include<stdio.h>
int main()
{
    int n;
    printf("Enter your series size: ");
    scanf("%d",&n);
    int i,j,sum=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum+=j;

        }

    }
    printf("%d",sum);
    getch();

}
