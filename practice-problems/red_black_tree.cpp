#include <iostream>
using namespace std;
class Node
{
public:
	int key;
	char color;
	Node *left;
	Node *right;
	Node *parent;

public:
	Node(int data)
	{
		key = data;
		color = 'r';
		left = NULL;
		right = NULL;
		parent = NULL;
	}
};

class RBT
{
public:
	Node *root;
	Node *temp_node1;
	RBT()
	{
		root = NULL;
		temp_node1 = NULL;
	}
	void insert_node(Node *);
	void insert_node_fix(Node *);
	void left_rotate(Node *);
	void right_rotate(Node *);
	Node *successor(Node *);
	void search();
	void delete_node();
	void delete_node_fix(Node *);
	void preorder(Node *);
};

void RBT::preorder(Node *temp_node)
{
	if (temp_node != NULL)
	{
		cout << "Key=" << temp_node->key << " ";
		cout << "Color=" << temp_node->color << "\n";
		preorder(temp_node->left);
		preorder(temp_node->right);
	}
}
void RBT::left_rotate(Node *temp_node)
{
	if (temp_node->right == NULL)
		return;
	else
	{
		Node *y = temp_node->right;
		if (y->left != NULL)
		{
			temp_node->right = y->left;
			y->left->parent = temp_node;
		}
		else
			temp_node->right = NULL;

		if (temp_node->parent != NULL)
			y->parent = temp_node->parent;
		if (temp_node->parent == NULL)
			root = y;
		else
		{
			if (temp_node == temp_node->parent->left)
				temp_node->parent->left = y;
			else
				temp_node->parent->right = y;
		}
		y->left = temp_node;
		temp_node->parent = y;
	}
}

void RBT::right_rotate(Node *temp_node)
{
	if (temp_node->left == NULL)
		return;
	else
	{
		Node *y = temp_node->left;
		if (y->right != NULL)
		{
			temp_node->left = y->right;
			y->right->parent = temp_node;
		}
		else
			temp_node->left = NULL;
		if (temp_node->parent != NULL)
			y->parent = temp_node->parent;
		if (temp_node->parent == NULL)
			root = y;
		else
		{
			if (temp_node == temp_node->parent->left)
				temp_node->parent->left = y;
			else
				temp_node->parent->right = y;
		}
		y->right = temp_node;
		temp_node->parent = y;
	}
}

void RBT::insert_node(Node *newnode)
{
	Node *temp_node = root;
	Node *temp_node1 = NULL;
	if (root == NULL)
	{
		root = newnode;
		newnode->parent = NULL;
	}
	else
	{
		while (temp_node != NULL)
		{
			temp_node1 = temp_node;
			if (newnode->key > temp_node->key)
				temp_node = temp_node->right;
			else
				temp_node = temp_node->left;
		}
		newnode->parent = temp_node1;
		if (newnode->key > temp_node1->key)
			temp_node1->right = newnode;
		else
			temp_node1->left = newnode;
	}
	insert_node_fix(newnode);
}
void RBT::insert_node_fix(Node *t)
{
	Node *u;
	if (root == t)
	{
		t->color = 'b';
		return;
	}
	while (t->parent != NULL && t->parent->color == 'r')
	{
		Node *g = t->parent->parent;
		if (g->left == t->parent)
		{
			if (g->right != NULL)
			{
				u = g->right;
				if (u->color == 'r')
				{
					t->parent->color = 'b';
					u->color = 'b';
					g->color = 'r';
					t = g;
				}
			}
			else
			{
				if (t->parent->right == t)
				{
					t = t->parent;
					left_rotate(t);
				}
				t->parent->color = 'b';
				g->color = 'r';
				right_rotate(g);
			}
		}
		else
		{
			if (g->left != NULL)
			{
				u = g->left;
				if (u->color == 'r')
				{
					t->parent->color = 'b';
					u->color = 'b';
					g->color = 'r';
					t = g;
				}
			}
			else
			{
				if (t->parent->left == t)
				{
					t = t->parent;
					right_rotate(t);
				}
				t->parent->color = 'b';
				g->color = 'r';
				left_rotate(g);
			}
		}
		root->color = 'b';
	}
}

Node *RBT::successor(Node *temp_node)
{
	Node *y = NULL;
	if (temp_node->left != NULL)
	{
		y = temp_node->left;
		while (y->right != NULL)
			y = y->right;
	}
	else
	{
		y = temp_node->right;
		while (y->left != NULL)
			y = y->left;
	}
	return y;
}
void RBT::search()
{
	if (root == NULL)
	{
		cout << "\nEmpty Tree\n";
		return;
	}
	int x;
	cout << "\nEnter key to search: ";
	cin >> x;
	Node *temp_node = root;
	int found = 0;
	while (temp_node != NULL && found == 0)
	{
		if (temp_node->key == x)
			found = 1;
		if (found == 0)
		{
			if (temp_node->key < x)
				temp_node = temp_node->right;
			else
				temp_node = temp_node->left;
		}
	}
	if (found == 0)
		cout << "\nElement Not Found.";
	else
	{
		cout << "\nKey: " << temp_node->key;
		cout << "\nColour: ";
		if (temp_node->color == 'b')
			cout << "Black";
		else
			cout << "Red";
		if (temp_node->parent != NULL)
			cout << "\nParent: " << temp_node->parent->key;
		else
			cout << "\nno parent node of the RBT present";
		if (temp_node->right != NULL)
			cout << "\nRight Child: " << temp_node->right->key;
		else
			cout << "\nno right child node of RBT present. ";
		if (temp_node->left != NULL)
			cout << "\nLeft Child: " << temp_node->left->key;
		else
			cout << "\nno left child node of the RBT present";
	}
}

void RBT::delete_node()
{
	if (root == NULL)
	{
		cout << "\nEmpty Tree.";
		return;
	}
	int x;
	cout << "\nEnter the key of the node to be delete: ";
	cin >> x;
	Node *temp_node;
	temp_node = root;
	Node *y = NULL;
	Node *temp_node1 = NULL;
	int found = 0;
	while (temp_node != NULL && found == 0)
	{
		if (temp_node->key == x)
			found = 1;
		if (found == 0)
		{
			if (temp_node->key < x)
				temp_node = temp_node->right;
			else
				temp_node = temp_node->left;
		}
	}
	if (found == 0)
	{
		cout << "\nElement Not Found.";
		return;
	}
	else
	{
		cout << "\ndel_rbt_nodeeted Element: " << temp_node->key;
		cout << "\nColour: ";
		if (temp_node->color == 'b')
			cout << "Black\n";
		else
			cout << "Red\n";
		if (temp_node->parent != NULL)
			cout << "\nParent: " << temp_node->parent->key;
		else
			cout << "\nno parent node_of_the_red_black_tree present ";
		if (temp_node->right != NULL)
			cout << "\nRight Child: " << temp_node->right->key;
		else
			cout << "\nno right child node_of_the_red_black_tree present. ";
		if (temp_node->left != NULL)
			cout << "\nLeft Child: " << temp_node->left->key;
		else
			cout << "\nno left child node_of_the_red_black_tree present.  ";
		cout << "\nnode_of_the_red_black_tree del_rbt_nodeeted.";
		if (temp_node->left == NULL || temp_node->right == NULL)
			y = temp_node;
		else
			y = successor(temp_node);
		if (y->left != NULL)
			temp_node1 = y->left;
		else
		{
			if (y->right != NULL)
				temp_node1 = y->right;
			else
				temp_node1 = NULL;
		}
		if (temp_node1 != NULL)
			temp_node1->parent = y->parent;
		if (y->parent == NULL)
			root = temp_node1;
		else
		{
			if (y == y->parent->left)
				y->parent->left = temp_node1;
			else
				y->parent->right = temp_node1;
		}
		if (y != temp_node)
		{
			temp_node->color = y->color;
			temp_node->key = y->key;
		}
		if (y->color == 'b')
			delete_node_fix(temp_node1);
	}
}

void RBT::delete_node_fix(Node *temp_node)
{
	Node *s;
	while (temp_node != root && temp_node->color == 'b')
	{
		if (temp_node->parent->left == temp_node)
		{
			s = temp_node->parent->right;
			if (s->color == 'r')
			{
				s->color = 'b';
				temp_node->parent->color = 'r';
				left_rotate(temp_node->parent);
				s = temp_node->parent->right;
			}
			if (s->right->color == 'b' && s->left->color == 'b')
			{
				s->color = 'r';
				temp_node = temp_node->parent;
			}
			else
			{
				if (s->right->color == 'b')
				{
					s->left->color == 'b';
					s->color = 'r';
					right_rotate(s);
					s = temp_node->parent->right;
				}
				s->color = temp_node->parent->color;
				temp_node->parent->color = 'b';
				s->right->color = 'b';
				left_rotate(temp_node->parent);
				temp_node = root;
			}
		}
		else
		{
			s = temp_node->parent->left;
			if (s->color == 'r')
			{
				s->color = 'b';
				temp_node->parent->color = 'r';
				right_rotate(temp_node->parent);
				s = temp_node->parent->left;
			}
			if (s->left->color == 'b' && s->right->color == 'b')
			{
				s->color = 'r';
				temp_node = temp_node->parent;
			}
			else
			{
				if (s->left->color == 'b')
				{
					s->right->color = 'b';
					s->color = 'r';
					left_rotate(s);
					s = temp_node->parent->left;
				}
				s->color = temp_node->parent->color;
				temp_node->parent->color = 'b';
				s->left->color = 'b';
				right_rotate(temp_node->parent);
				temp_node = root;
			}
		}
		temp_node->color = 'b';
		root->color = 'b';
	}
}
int main()
{
	int ch, y = 0;
	RBT obj;
	do
	{
		cout << "\nOperations:";
		cout << "\n1.Add Node\n2.Search\n3.delete Node\n4.Display in Preorder\n5.Exit";
		cout << "\nEnter your choice:";
		cin >> ch;
		switch (ch)
		{
		case 1:
			int x;
			cout << "Enter key:";
			cin >> x;
			obj.insert_node(new Node(x));
			cout << "\nAdded";
			break;
		case 2:
			obj.search();
			break;
		case 3:
			obj.delete_node();
			break;
		case 4:
			obj.preorder(obj.root);
			break;
		case 5:
			y = 1;
			break;
		default:
			cout << "\nInvalid choice";
		}
		cout << endl;

	} while (y != 1);
	return 0;
}
