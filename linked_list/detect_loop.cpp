bool detectLoop(Node *head)
{
    // your code here
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return 1;
        }
    }
    return 0;
}