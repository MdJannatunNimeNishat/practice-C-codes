
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
int i,n,item, noOFNodes = 0;
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
    noOFNodes ++;
}

//insert after a given location

cout<<endl<<noOFNodes<<endl;
cout<<"Enter the position where u want to insert u r node"<<endl;
int pos,j=1,nValue;
cin>>pos;
if(pos>noOFNodes)
{
    cout<<"Index out of bond"<<endl;
}
else{

    cout<<"Enter u r value of the new node"<<endl;
    cin>>nValue;
    nptr = new (node);
    nptr->data = nValue;
    nptr->next = NULL;
    tptr = lis;
    while(j<pos)
    {
        tptr = tptr->next;
        j++;
    }
    //tptr->next = nptr;
    nptr->next = tptr->next;
    tptr->next = nptr;
}



  tptr = lis;
    while(tptr!=NULL)
    {
        cout<<endl;
        cout<<tptr->data;
        tptr= tptr->next;
    }


}
