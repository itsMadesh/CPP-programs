#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data=data;
            this->next=NULL;
        }

};

class LinkedList
{
    public:
        Node *head=NULL,*tail=NULL;
        void addnode(int data)
        {
            Node *newnode=new Node(data);
            if(head==NULL)
            {
                head=newnode;
                tail=newnode;
            }
            else
            {
                // cout<<tail->data<<"\n";
                tail->next=newnode;
                tail=newnode;

            }
        }
        void display()
        {
            Node *current=head;
            while(current!=NULL)
            {
                cout<<current->data<<" ";
                current=current->next;
            }
        }
        
};
int main()
{
    LinkedList l;
    l.addnode(5);
    l.addnode(6);
    l.addnode(7);
    l.addnode(8);
    l.display();
}
