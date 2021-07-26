#include<bits/stdc++.h>
using namespace std;

struct linkList{

    int data;
    linkList *next;

};
linkList *node, *nptr, *tptr;

int main()
{
    int i,n,value;
    cout<<"Enter the size of the linklist: "<<endl;
    cin>>n;
    node = NULL;
    cout<<"Enter the values of the linklist: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>> value;
        nptr = new (linkList);
        nptr->data = value;
        nptr-> next = NULL;

        if(node==NULL)
        {
            node = nptr;
            tptr = nptr;
        }
        else{
            tptr->next = nptr;
            tptr= nptr;
        }
    }

    //creating new node
    int insertNewData;
    cout<<"Instert new data"<<endl;
    cin>>insertNewData;

    nptr = new (linkList);
    nptr->data = insertNewData;
    nptr->next = node;
    node = nptr;

   //linking at the very first of the linllist




    // printing
    tptr = node;
    while(tptr!=NULL)
    {
        cout<<endl;
        cout<<tptr->data;
        tptr= tptr->next;
    }





}
