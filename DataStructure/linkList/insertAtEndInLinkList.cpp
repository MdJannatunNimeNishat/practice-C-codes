#include<bits/stdc++.h>
using namespace std;

struct linkList
{
    int data;
    linkList *next;
};
linkList *head, *nptr, *tptr;

int main()
{
    int i, n ,value;
    head = NULL;
    cout<<"Enter the size of your linkList: "<<endl;
    cin>>n;
    cout<<"Enter values for your linkList: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>value;
        nptr= new (linkList);
        nptr->data = value;
        nptr->next = NULL;

        if(head==NULL)
        {
            head = nptr;
            tptr= nptr;
        }
        else
        {
            tptr->next = nptr;
            tptr= nptr;
        }
    }

    //insrting at the very last
    cout<<"Enter the value for new node"<<endl;
    int nValue;
    cin>>nValue;
    nptr = new (linkList);
    nptr->data = nValue;
    nptr->next = NULL;
    tptr = head;
    while(tptr->next!=NULL)
    {
        tptr= tptr->next;
    }
    tptr->next = nptr;


    //printing linklist
    tptr = head;
    while(tptr!=NULL)
    {
        cout<<endl;
        cout<<tptr->data;
        tptr= tptr->next;
    }




}










