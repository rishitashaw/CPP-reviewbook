#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insertAtHead(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }

    node *n = new node(data);
    n->next = head;
    head = n;
}

void insertInMiddle(node *head, int data, int pos)
{
    if (pos == 0)
        insertAtHead(head, data);

    else
    {
        node *temp = head;
        for (int jump = 1; jump <= pos - 1; jump++)
        {
            temp = temp->next;
        }
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

node *recReverse(node *head)
{
    if (head == NULL or head->next == NULL)
    {
        return head;
    }

    node *sHead = recReverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return sHead;
}

void printLL(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    insertAtHead(head, 7);
    insertAtHead(head, 8);
    insertAtHead(head, 9);
    insertAtHead(head, 10);
    insertInMiddle(head, 11, 5);
    recReverse(head);
    printLL(head);
    return 0;
}