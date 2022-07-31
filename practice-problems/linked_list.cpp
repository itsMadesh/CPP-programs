#include<iostream>
using namespace std;

// Node-Contains data and next node address

class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            this->data=data;
            next=NULL;
        }

};

// Single linked list--Each Node of ll contains data and next node of address.

class ll{
    private:
        Node *head=NULL;
    public:
        void add_node(int data){
            cout<<"inserting "<<data<<endl;
            Node *newnode=new Node(data);
            if(head==NULL){
                head=newnode;
                return;
            }
            Node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
        void display(){
            Node *temp=head;
            while(temp!=NULL){
                cout<<temp->data<<"-->";
                temp=temp->next;
            }
            cout<<"null";
        }

};

int main(){
    ll l;
    l.add_node(2);
    l.add_node(3);
    l.add_node(5);
    l.add_node(6);
    l.display();
    return 0;
}