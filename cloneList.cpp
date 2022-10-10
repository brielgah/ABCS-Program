class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this.val = val;
        this.next = nullptr;
    }
};

Node *cloneList(Node *head)
{
    Node *listIter = head;
    Node *copy = nullptr;
    Node *copyIter = nullptr;
    while (listIter)
    {
        Node *newNode = new Node(listIter->val);
        if (!copy)
            copy = newNode;
        else
            copyIter->next = newNode;
        copyIter = newNode;
        listIter = listIter->next;
    }
    return copy;
}

Node *reverseList(Node *head)
{
    Node *curr = head;
    Node *prev = nullptr;
    while (curr)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}