#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
     Node* right;
};

bool check( const Node* root, int min, int max) {
    if (root == nullptr )
        return true;

    if (root->data <= min || root->data >= max)
        return false;

    return check(root->left, min, root->data) &&
           check(root->right, root->data, max);
}
