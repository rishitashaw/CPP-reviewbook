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

node *midPoint(node *head)
{
    node *slow = head;
    node *fast = head->next;

    while (fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node *merge(node *list1, node *list2)
{
    if (list1 == NULL)
        return list2;

    if (list2 == NULL)
        return list1;

    node *c;
    if (list1->data < list2->data)
    {
        c = list1;
        c->next = merge(list1->next, list2);
    }
    else
    {
        c = list2;
        c->next = merge(list2->next, list1);
    }
    return c;
}

node *merge_sort(node *head)
{
    if (head == NULL or head->next == NULL)
    {
        return head;
    }
    node *mid = midPoint(head);
    node *list1 = head;
    node *list2 = mid->next;
    mid->next = NULL;

    list1 = merge_sort(list1);
    list2 = merge_sort(list2);
    return merge(list1, list2);
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
    printLL(head);
    return 0;
}