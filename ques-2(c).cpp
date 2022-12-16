#include <iostream>
#include <queue>
 
using namespace std;
 
class Node {
public:
    int data;
    Node* left;
    Node* right;
};
 
Node* createNode(int data)
{
 
    Node* newnode = new Node();
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
 
    return newnode;
}
 
 
int calculateHeight(Node* root)
{
    queue<Node*> nodesInLevel;
    int height = 0;
    int nodeCount = 0;
    Node* currentNode;
    if (root == NULL) {
        return 0;
    }
    nodesInLevel.push(root);
    while (!nodesInLevel.empty()) {
        height++;
        nodeCount = nodesInLevel.size();
        while (nodeCount--) {
            currentNode = nodesInLevel.front();
 
 
            if (currentNode->left != NULL) {
                nodesInLevel.push(currentNode->left);
            }
 
            if (currentNode->right != NULL) {
                nodesInLevel.push(currentNode->right);
            }
 
            nodesInLevel.pop();
        }
    }
    return height;
}
 
int main()
{
 
    Node* root = NULL;
 
    root = createNode(1);
    root->left = createNode(2);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right = createNode(3);
 
    cout << "The height of the binary tree is: " << calculateHeight(root) << ".";
 
    return 0;
}
