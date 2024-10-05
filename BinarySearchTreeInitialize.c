#include "onlyheaders.h"


struct bst_node *dynamically_allocate_node(int v) {
        
        struct bst_node *node = (struct bst_node *)malloc(sizeof(struct bst_node));
        // dynamically allocate a node with the struct type 
        
        node->value = v; // set data of a node to value 
        node->l = node->r = NULL; // set both of childs to NULL
        
        return node; // return newly created node 
        
 }
 
 struct bst_node* insert_node_to_tree(struct bst_node* bst_node, int v) {
         
                
                /* If the tree is empty, return a new node */
                if (bst_node == NULL) return dynamically_allocate_node(v);
                
                /* Otherwise, recur down the tree */
                if (v < bst_node->value)
                bst_node->l = insert_node_to_tree(bst_node->l,v);
                else
                bst_node->r = insert_node_to_tree(bst_node->r,v);
              
                
                return bst_node;
         
 }
 
 
 
 

void storeNodes(struct bst_node* root, struct bst_node** arr,int *index)
{
    // Base case
    if (root==NULL)
        return;
  
    // Store nodes in Inorder (which is sorted order for BST)
    storeNodes(root->l, arr,index);
    arr[*index] = root;
    *index = *index+1;
    
    if(*index>=100) {
            return;
    }
    storeNodes(root->r, arr,index);
}
  
/* Recursive function to construct binary tree */
struct bst_node* buildTree(struct bst_node** arr, int start,int end)
{
    // base case
    if (start > end)
        return NULL;
  
  
    int mid = (start + end)/2;
    
    struct bst_node *root = arr[mid];
  
   
    root->l  = buildTree(arr, start, mid-1);
    root->r = buildTree(arr, mid+1, end);
  
    return root;
}
  
