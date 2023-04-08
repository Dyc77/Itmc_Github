//include
#include <iostream>
using namespace std;

//define a tree node
struct TreeNode
{
    int value;
    TreeNode* left;
    TreeNode* right;
};

//create a tree node
TreeNode* createNode(int value)
{
    TreeNode* node = new TreeNode;
    node->value = value;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

//insert a node into a tree
void insertNode(TreeNode* &root, int value)
{
    if (root == nullptr)
    {
        root = createNode(value);
        return;
    }
    if (value < root->value)
    {
        insertNode(root->left, value);
    }
    else
    {
        insertNode(root->right, value);
    }
}

//a function to print the tree
void printTree(TreeNode* root)
{
    if (root == nullptr)
    {
        return;
    }
    printTree(root->left);
    cout << root->value << " ";
    printTree(root->right);
}

//a main function
int main()
{
   //create a 3 node tree
    TreeNode* root = nullptr;
    insertNode(root, 5);
    insertNode(root, 3);
    insertNode(root, 7);
    printTree(root);
    return 0;
    
}



