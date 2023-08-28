#include <stdio.h>
#include <stdlib.h>

struct node* root = NULL;

struct node{
  int data;
  struct node* left=NULL;
  struct node* right=NULL;
};
void createTree(struct node* tree, int data){
    if(tree==NULL){
        root = malloc(sizeof(struct node));
        printf("Enter the value of data in root node");
        tree->data=data;
    return;
    }
   if(data<tree->data){
        createTree(tree->left,data);
   }
   else{
       createTree(tree->right,data);
   }
}
int main()
{
  struct node* tree = root;
  createTree(tree,1);
  createTree(tree,2);
  createTree(tree,3);
  createTree(tree,4);
return 0;
}
