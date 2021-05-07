#include<stdio.h>
int main()
{
   /* int var1=0;
    printf("Enter your mark:");
    scanf("%d",&var1);
    switch (var1)
    {
    case 100:
        printf("A+");
        break;
    case 80:
        printf("A+");
        break;
    case 70:
        printf("A");
        break;
    case 60:
        printf("A-");
        break;
    case 50:
        printf("B");
        break;
    case 40:
        printf("C");
        break;
    case 32:
        printf("fail!");
        break;

    default:
        printf("invalid");
        break;

    }
*/
    int a=0,i=0,sum=3;

        for(i=1;i<=3;i++){
    switch(i)
    {
        case 1:
            sum = sum+i;
            //printf("%d",i);
            break;
        case 2:
            //("%d",i);
            sum = sum+i;
            break;
        case 3:
            //printf("%d",i);
            break;
        case 4:
            //printf("%d",i);
            sum = sum+i;
            break;
        case 5:
           // printf("%d",i);
            sum = sum+i;
            break;
        default:
            printf("invalid!");
            break;
        }
        printf("%d\t\n",i);
    }
    printf("%d",sum);


}
