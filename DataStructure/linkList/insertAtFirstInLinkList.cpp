#include<bits/stdc++.h>
using namespace std;

struct linkList{
    int data;
    linkList *next;
};
linkList *head, *nptr, *tptr;

int main()
{
    int i,n,value;
    cout<<"Enter the size of u r linklist: "<<endl;
    cin>>n;
    head= NULL;
    cout<<"Enter values for linklist: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>value;
        nptr = new (linkList);
        nptr->data = value;
        nptr->next = NULL;

        if(head==NULL)
        {
            head = nptr;
            tptr = nptr;
        }
        else {
            tptr->next = nptr;
            tptr = nptr;
        }
    }

    //inserting at first

    cout<<"Enter new node's value: "<<endl;
    int newVal;
    cin>>newVal;
    nptr = new (linkList);
    nptr->data= newVal;
    nptr->next = head;
    head = nptr;


    //printing linklist
    tptr = head;
    while(tptr!=NULL)
    {
        cout<<endl;
        cout<<tptr->data;
        tptr= tptr->next;
    }


}















