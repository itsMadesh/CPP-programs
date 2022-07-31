#include <iostream>
using namespace std;
class Node
{
public:
   int data;
   Node *next;

public:
   Node(int value)
   {
      data = value;
      next = NULL;
   }
};
class stack
{
   private:
      Node *head;
      Node *tail;

   public:
      stack()
      {
         head = NULL;
         tail = NULL;
      }
      void push(int data)
      {
         Node *newnode = new Node(data);
         if (head == NULL)
         {
            head = newnode;
            tail = newnode;
         }
         else
         {
            tail->next = newnode;
            tail = tail->next;
         }
      }
      int pop()
      {
         int value;
         if (head == NULL)
         {
            return -1;
         }
         else if (head->next == NULL)
         {
            value = head->data;
            head = NULL;
            tail = NULL;
         }
         else
         {
            Node *temp = head;
            while (temp->next->next != NULL)
            {
               temp = temp->next;
            }
            value = temp->next->data;
            temp->next = NULL;
            tail = temp;
         }
         return value;
      }
      int top()
      {
         if (head == NULL)
         {
            return -1;
         }
         else
         {
            return tail->data;
         }
      }

      void display()
      {
         Node *temp = head;
         while (temp != NULL)
         {
            cout << temp->data << "-->";
            temp = temp->next;
         }
         cout << "null" << endl;
      }
      string isempty()
      {
         if (head == NULL)
         {
            return "True";
         }
         return "false";
      }
};
int main()
{
   int n;
   stack a;
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Empty or not"<<endl;
   cout<<"5) Exit"<<endl;
   do{
      cout<<"Enter choice: ";
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:";
            cin>>val;
            a.push(val);
            break;
         }
         case 2: {
            cout<<"Popped element:"<<a.pop()<<endl;
            break;
         }
         case 3: {
            a.display();
            break;
         }
         case 4: {
            cout<<"isempty?:"<<a.isempty()<<endl;
            break;
         }
         case 5: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=5);
   return 0;
}