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

node *kreverse(node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *prev = NULL;
    node *current = head;
    node *temp;
    int cnt = 1;
    while (current != NULL and cnt <= k)
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
        cnt++;
    }
    if (temp != NULL)
    {
        kreverse(head, k);
        head->next;
    }
    return prev;
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
    head = kreverse(head, 3);
    printLL(head);
    return 0;
}