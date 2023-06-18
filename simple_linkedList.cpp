#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* ptr;
};

int main()
{
    node*head=new node();
    node*node2=new node();
    node*node3=new node();
    node*node4=new node();
    // head->data=1;
    cout<<"Enter values in linked list 1 :";
    cin>>head->data;
    head->ptr=node2;
    // node2->data=2;
    cin>>node2->data;
    node2->ptr=node3;
    // node3->data=3;
    cin>>node3->data;
    node3->ptr=node4;
    // node4->data=4;
    cin>>node4->data;
    node4->ptr=NULL;
    node*temp=head;
    
    node*head1=new node();
    node*node22=new node();
    node*node33=new node();
    node*node44=new node();
    // head->data=1;
    cout<<"Enter values in linked list 2 :";
    cin>>head1->data;
    head1->ptr=node22;
    // node2->data=2;
    cin>>node22->data;
    node22->ptr=node33;
    // node3->data=3;
    cin>>node33->data;
    node33->ptr=node4;
    // node4->data=4;
    cin>>node44->data;
    node44->ptr=NULL;
    node*temp1=head1;

    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->ptr;
    }
    cout<<"Null\n";

    while(temp1!=NULL)
    {
        cout<<temp1->data<<" -> ";
        temp1=temp1->ptr;
    }
    cout<<"Null\n";
}