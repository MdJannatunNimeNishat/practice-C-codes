#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{1,2,1},{3,1,2}};
    int b[3][3]={{1,2,3},{1,2,1},{3,1,2}};
    int c[3][3];
    int i,j,k,temp=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            for(k=0;k<3;k++)
            {
                temp+=a[i][k]*b[k][j];
            }
            c[i][j]=temp;
            temp=0;
        }

    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);

        }
        printf("\n");

    }
}
