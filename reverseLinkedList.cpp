// Iterative solution
struct Node{
    int value;
    Node* next;
}

Node* reverseLinkedList(Node root)
{
    Node* prev = nullptr;
    Node* curr = root;
    Node* next = curr->next;
    Node* head = nullptr;
    while(curr)
    {
        head = curr;
        curr->next = prev;
        prev = curr;
        curr = next;
        next = next->next;
    }
    return head;
}

// Recursively
Node* reverseLinkedList(Node head)
{
    if(!head->next || !head)
        return head;
    Node* next = head->next;
    Node* newHead = reverseLinkedList(next)
    next->next = head;
    head->next = nullptr
    
    return newHead;
}