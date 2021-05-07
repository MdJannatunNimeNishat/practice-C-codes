#include<stdio.h>
int main()
{
    int userMark=0;
    printf("Enter your mark\n");
    scanf("%d",&userMark);
    userMark= userMark/10;
    printf("%d",userMark);
    switch (userMark)
    {
    case 8:
        printf("A+");
        break;
    case 7:
        printf("A");
        break;
    case 6:
        printf("A-");
        break;
    default:
        printf("fail");
        break;
    }
return 0;
}
