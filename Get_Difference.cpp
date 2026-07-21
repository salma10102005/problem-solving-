#include<bits/stdc++.h>
using namespace std;
class node
{
    public :
    int val;
    node* next;
    node (int val)
    {
        this -> val = val;
        this -> next = NULL;
    }
};
void inser_at_tail(node* &head, node* &tail, int val)
{
    node* newnode = new node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail -> next = newnode;
    tail = newnode;

}
// void print_linklist(node* head)
// {
//     node* temp = head;
//     while(temp != NULL)
//     {
//         cout << temp -> val << " ";
//         temp = temp -> next;
//     }
//}
int main()
{
    node* head = NULL;
    node* tail = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        else
        {
            inser_at_tail(head,tail,val);
        }
    }
    int mx = head -> val;
    int mn = head -> val;
    node* temp = head;
    while(temp != NULL)
    {
        mx = max(mx, temp-> val);
        mn = min(mn, temp->val);
        temp = temp -> next;
    }
    cout << mx-mn << endl;
    return 0;
}