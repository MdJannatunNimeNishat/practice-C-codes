#include<bits/stdc++.h>
using namespace std;

struct linkList {

    int data;
    linkList *next;
};
linkList *starting, *newNode, *temp;
int main()
{
    int i,siz,value;

    starting = NULL;

    cout<<"Enter the size of your linkList: "<<endl;
    cin>>siz;
    cout<<"Enter values for your linkList: "<<endl;
    for(i=0;i<siz;i++)
    {
        cin>>value;
        newNode = new (linkList);
        newNode->data = value;
        newNode->next = NULL;

        if(starting==NULL)
        {
            starting= newNode;
            temp = newNode;
        }
        else{
            temp->next= newNode;
            temp= newNode;
        }
    }

    //print the node values

    temp = starting;
    while(temp!=NULL)
    {

        cout<<endl;
        cout<<temp->data;
        temp= temp->next;
        cout<<"";
    }

    cout<<endl;



  //traversing in linklist
    temp = starting;
    while(temp!=NULL)
    {

        temp = temp->next;

    }


}















