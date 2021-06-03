
//1*3+2*5+3*7+...+n*(2n+1)

#include<stdio.h>
int main()
{
    int n;
    printf("Enter your series size: ");
    scanf("%d",&n);
    int i,j,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=(i*(2*i+1));

    }
    printf("%d",sum);
    getch();

}
