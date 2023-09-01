#include <stdio.h>
#include <stdlib.h>

// Definition of a binary tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to calculate the height of a binary tree
int height(struct Node* node) {
    // Base case
    if (node == NULL) {
        return 0;
    }

    int left = height(node->left);
    int right = height(node->right);
    int ans = (left > right) ? left + 1 : right + 1;
    return ans;
}

// Function to create a new binary tree node
struct Node* newNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main() {
    // Creating a simple binary tree
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // Calculate the height of the binary tree
    int treeHeight = height(root);

    // Print the height
    printf("Height of the binary tree: %d\n", treeHeight);

    return 0;
}
