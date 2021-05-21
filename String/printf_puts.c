#include<stdio.h>
int main()
{
    char *ptr = "hello world!";
    printf("%.5s",ptr);
    printf("\n");
    printf("%6.5s",ptr);
    printf("\n");
    puts(ptr);
    puts(ptr);
}
