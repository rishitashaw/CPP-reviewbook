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
void reverse(node *&head)
{
    node *prev = NULL;
    node *current = head;
    node *temp;

    while (current != NULL)
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    head = prev;
    return;
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
    reverse(head);
    printLL(head);
    return 0;
}