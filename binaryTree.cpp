struct Node{
    int value;
    Node* left;
    Node* right;
}

// In-Order traversal
void InOrderTraversal(Node* root)
{
    if(!root)
        return;
    InOrderTraversal(root->left)
    cout << root->value;
    InOrderTraversal(root->right)
}

// Pre-Order traversal
void PreOrderTraversal(Node* root)
{
    if(!root)
        return;
    cout << root->value;
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

// Post-Order traversal
void PostOrderTraversal(Node* root)
{
    if(!root)
        return;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout << root->value;
}