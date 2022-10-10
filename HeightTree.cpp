#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};

int calculateHeight(Node *root)
{
    if (!root)
        return 0;
    int hLeft = calculateHeight(root->left);
    int hRight = calculateHeight(root->right);
    return 1 + max(hLeft, hRight);
}

Node *insert_node_into_binary_search_tree(Node *root, int node_data)
{
    if (!root)
    {
        root = new Node(node_data);
    }
    else
    {
        if (node_data < root->value)
        {
            root->left = insert_node_into_binary_search_tree(root->left, node_data);
        }
        else if (node_data > root->value)
        {
            root->right = insert_node_into_binary_search_tree(root->right, node_data);
        }
    }
    return root;
}

void print_binary_search_tree_inorder_traversal(Node *root, string sep)
{
    if (!root)
    {
        return;
    }

    print_binary_search_tree_inorder_traversal(root->left, sep);

    cout << root->value << sep;

    print_binary_search_tree_inorder_traversal(root->right, sep);
}

int main()
{
    vector<int> v = {7, 4, 2, 6, 1, 3, 5, 7};
    Node *root = nullptr;
    for (auto val : v)
        root = insert_node_into_binary_search_tree(root, val);

    print_binary_search_tree_inorder_traversal(root, " ");
    cout << calculateHeight(root);
}