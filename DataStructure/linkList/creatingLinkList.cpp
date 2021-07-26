//#include<isostra>
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

struct node {
public:
    int data;
    node *next;
};
node *lis,*nptr, *tptr;


int main() {
int i,n,item;
lis = NULL;
cout<<"Enter the number of nodes: "<<endl;
cin>>n;
cout<<"Enter data for the node with space:"<<endl;
for(i=1;i<=n;i++)
{
    cin>>item;
    nptr = new (node);
    nptr->data=item;
    nptr->next= NULL;
    if(lis==NULL)
    {
        lis=nptr;
        tptr=nptr;
    }
    else{
        tptr->next = nptr;
        tptr= nptr;
    }

}

tptr = lis;
for(i=1;i<=n;i++)
{
    cout<<endl;
    cout<<tptr->data;
    tptr= tptr->next;
    cout<<"";
}

/*int found,flag=0;
cout<<"Enter the value you want to search: "<<endl;
cin>>found;
tptr = lis;
for(i=1;i<=n;i++)
{
    if(tptr->data == found)
    {
        flag = 1;
        break;
    }
    tptr = tptr->next;
}
if(flag==1)
{
    printf("Found at %drd position",i);
}
else{
    printf("not found!");
}*/

}
