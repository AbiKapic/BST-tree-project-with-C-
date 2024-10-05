#ifndef DEFINE_H_INCLUDED 
 #define DEFINE_H_INCLUDED
        #include <stdbool.h>

         typedef struct bst_node {
                 int value;
                 struct bst_node* l;
                 struct bst_node* r;
                 
             
                } NODE; 
        
        
        
struct bst_node *dynamically_allocate_node(int v); // dynamically allocate node 

struct bst_node* insert_node_to_tree(struct bst_node* bst_node, int v); // insert node in a tree 

void storeNodes(struct bst_node* root, struct bst_node** arr,int *index);

struct bst_node* buildTree(struct bst_node** arr, int start,int end);


struct bst_node * find_min_value_in_bst(struct bst_node* bst_node); // find minimum value in a tree 
struct bst_node* deleteNode(struct bst_node* root, int v,bool *check); // delete node 



int num_of_leafs(struct bst_node* bst_node); // returning number of leafs in a tree 

void delete_everything(struct bst_node* root); // deleting the whole tree 

void search(struct bst_node* root, int v,bool *check); // searching for a specific bst node




void display_postorder(struct bst_node* bst_node);
void display_inorder(struct bst_node* bst_node); 
void display_preorder(struct bst_node* bst_node); 

void display(struct bst_node* bst_node,int depth); // printing tree out with levels 

 
 #endif // DEFINE_H_INCLUDED