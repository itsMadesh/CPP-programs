#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
    public:
        Node(int value){
            data=value;
            next=NULL;
        }
};
class sll{
    private:
        Node *head;
        Node *tail;
    public:
        sll(){
            head=NULL;
            tail=NULL;
        }
        void push_back(int data){
        	Node *newnode=new Node(data);
            if(head==NULL){
                head=newnode;
                tail=newnode;
            }
            else{
                tail->next=newnode;
                tail=tail->next;
            }
        }
        int delete_back(){
        	int value;
            if(head==NULL){
                return -1;
            }
            else if(head->next==NULL){
            	value=head->data;
                head=NULL;
                tail=NULL;
            }
            else{
                Node *temp=head;
                while(temp->next->next!=NULL){
                    temp=temp->next;
                }
                value=temp->next->data;
                temp->next=NULL;
                tail=temp;     
            }
            return value;
        }
        int delete_front(){
        	int value;
            if(head==NULL){
                return -1;
            }
            else if(head->next==NULL){
            	value=head->data;
                head=NULL;
                tail=NULL;
            }
            else{
                value=head->data;
				head=head->next;   
            }
            return value;	
		}
        int top(){
            if(head==NULL){
                return -1;
            }
			else{
				return tail->data;
			}	
		}
		int front(){
			if(head==NULL){
				cout<<"Empty";
				return -1;
			}
			return head->data;
		}
        void display(){
            Node *temp=head;
            while(temp!=NULL){
                cout<<temp->data<<"-->";
                temp=temp->next;
            }
            cout<<"null"<<endl;         
        }
        string empty(){
        	if(head==NULL){
        		return "True";
			}
			return "false";
		}

};
