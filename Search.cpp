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
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        Node* head = NULL;
        Node* tail = NULL;
        int x;
        while(cin >> x && x != -1)
        {
            insert_at_tail(head, tail, x);
        }
        int target;
        cin >> target;
        Node* temp = head;
        bool found = false;
        for(int index = 0; temp != NULL; index++)
        {
            if(temp->val == target)
            {
                cout << index << endl;
                found = true;
                break;
            }
            temp = temp->next;
        }
        if(found == false)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}