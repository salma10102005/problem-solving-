#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void remove_duplicate(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        Node* current = temp;

        while(current->next != NULL)
        {
            if(current->next->val == temp->val)
            {
                Node* deleteNode = current->next;

                current->next = current->next->next;

                delete deleteNode;
            }
            else
            {
                current = current->next;
            }
        }

        temp = temp->next;
    }
}

void print_list(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while(cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    remove_duplicate(head);

    print_list(head);

    return 0;
}