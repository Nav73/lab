#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
//building the tree
struct node* buildTree(struct node* root) {
    printf("Enter the data: ");
    int data;
    scanf("%d",&data);
    root = (struct node*) malloc(sizeof(struct node));
    root->data = data;
    if(data == -1) {
        return NULL;
    }
    printf("Enter data for inserting in left of %d \n",data);
    root->left = buildTree(root->left);
    printf("Enter data for inserting in right of %d \n",data);
    root->right = buildTree(root->right);
    return root;
}
//traversing the tree
void inorder(struct node* root) {
    //base case
    if(root == NULL) {
        return ;
    }
    inorder(root->left);
    printf("%d ",root-> data);
    inorder(root->right);
}
int main() {
    struct node* root;
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    inorder(root);
    return 0;
}
