#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0,val =1,check;
    for(i=0;i<5;i++)
    {
        if(arr[i]==val)
        {
           check =1;
            break;
          //  printf("%d found at index %d",val,arr[i]);
        }
       /* else{
           break;
            //printf("Not found");
        }*/
    }
    //printf("%d found at index %d",val,arr[i]);
    //printf("Not found");
    if(check==1)
    {
     printf("%d found at index %d",val,arr[i]);
    }
    else{
        printf("Not found");
    }
}
