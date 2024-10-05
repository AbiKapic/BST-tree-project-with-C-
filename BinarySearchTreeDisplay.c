#include "onlyheaders.h"


void display_preorder(struct bst_node* bst_node) {
        
        
          if (bst_node == NULL)       return;
                printf("%d ", bst_node->value);
                display_preorder(bst_node->l);
                display_preorder(bst_node->r);
        
}


void display_inorder(struct bst_node* bst_node) {
        
        
         if (bst_node == NULL) return;
          
        display_inorder(bst_node->l);
        printf("%d ", bst_node->value);
        display_inorder(bst_node->r);
        
}


void display_postorder(struct bst_node* bst_node) {
        
            if (bst_node == NULL)
                return;
                
        display_postorder(bst_node->l);
        display_postorder(bst_node->r);
        printf("%d ", bst_node->value);
        
        
}

void display(struct bst_node* bst_node,int depth) {
        
      if (bst_node != NULL){ 
              printf("\nDepth (%d) -     %d ",depth,bst_node->value);
            
           
          
          if(bst_node->l == NULL && bst_node->r != NULL) {
                  printf("\nDepth (%d) -     x ",depth+1);
          }
       
        display(bst_node->l,depth+1); 
        
        

 
          if(bst_node->r == NULL && bst_node->l != NULL) { // do same thing here 
                  printf("\nDepth (%d) -     x ",depth+1);
          }
        
        
        display(bst_node->r,depth+1); // keep going through the right node 
        
        
        
        
        
        
        
}



}




struct bst_node * find_min_value_in_bst(struct bst_node* bst_node) {
                
                struct bst_node* curr = bst_node; 
      
        
        while (curr && curr->l != NULL)
        curr = curr->l;
        
        return curr;
        
}

int num_of_leafs(struct bst_node* bst_node) 
{ 
    if(bst_node == NULL)    
        return 0; 
    if(bst_node->l == NULL && bst_node->r == NULL) 
        return 1;         
    else
        return num_of_leafs(bst_node->l)+ num_of_leafs(bst_node->r);  
} 

void search(struct bst_node* root, int v,bool *check) {
 
  if (root == NULL) return;
        
        if (v < root->value) 
        search(root->l, v,check);
        
        else if (v > root->value) // if it's value is greater then we go to the right child 
        
        search(root->r, v,check);
        
        else
        {
      // if they are equal it means value exists in a tree and we set up our check boolean value 
      // to true 
        *check = true;
       
        }
        
}
        
        
        
        

