#include <iostream>
using namespace std;
typedef struct node
{
    int data;
    node *next;
} node;
node *head = NULL;
void addnode(int data)
{
    node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void display()
{
    if (head == NULL)
    {
        cout << "List is empty\n";
    }
    else
    {
        node *current = head;
        cout << "Elements in Single linked list:\n";
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
    }
}
int main()
{
    addnode(5);
    addnode(6);
    addnode(7);
    addnode(8);
    display();
}