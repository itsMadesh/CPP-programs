#include <iostream>
using namespace std;
template <typename T>
struct node
{
    T data;
    node *next;
};
template <class T>
class linked_list
{
private:
    node<T> *head, *tail;

public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(T n)
    {
        node<T> *tmp = new node<T>;
        tmp->data = n;
        tmp->next = NULL;

        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    void display()
    {
        node<T> *temp = head;
        cout << endl;
        while (temp != NULL)
        {
            cout << temp->data;
            cout << " -> ";
            temp = temp->next;
        }

        cout << "NULL";
    }

    void del_node()
    {

        if (head->next == NULL)
        {
            head = NULL;
            tail = NULL;
        }

        else
        {
            node<int> *temp = head;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = NULL;
            tail = temp;
        }
    }
};

int main()
{
    linked_list<int> a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(3);
    a.del_node();
    a.display();

    linked_list<char> b;
    b.add_node('c');
    b.add_node('b');
    b.add_node('e');
    b.display();
    return 0;
}
