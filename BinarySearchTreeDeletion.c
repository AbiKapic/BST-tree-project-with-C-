#include "onlyheaders.h"

struct bst_node* deleteNode(struct bst_node* root, int v,bool *check) { 
        
        
        if (root == NULL) return root;
        
        if (v < root->value) 
        root->l = deleteNode(root->l, v,check);
        
        else if (v > root->value)
        root->r = deleteNode(root->r, v,check); // we call the right child 
        
        else
        {
        if (root->l == NULL) { 
        struct bst_node *tempry = root->r;
        *check = true;
        free(root);
        return tempry;
        }
        
        else if (root->r == NULL)
        { 
        struct bst_node *tempry = root->l; 
        *check = true;
        free(root);
        return tempry;
        }
        struct bst_node* tempry = find_min_value_in_bst(root->r); 
        root->value = tempry->value;
        root->r = deleteNode(root->r, tempry->value,check); // then recursively call to actually 
        // delete temp->data which in this case is going to be the last in our tree
        }
        return root;
        
}

void delete_everything(struct bst_node* root) {
        
           if (root != NULL) {
                 
           // so we keep going until root is different than NULL 
            
              
           
          
         
       if(root->l != NULL) { // call a left child 
        delete_everything(root->l);
       }
        

 
         
        if(root->r != NULL) { // call a right chil 
        delete_everything(root->r);
        }
        
           
            free (root); 
            root = NULL;
        
           } 
        
        
} 

