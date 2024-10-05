#include "onlyheaders.h"
char doMenu ( void );

int main()
{
        int opt;
        struct bst_node *root = NULL;
    do {
            
            opt = doMenu();
            
            switch(opt) {
                    
                    case 1 : {
                         printf("Insert a value: ");
                         int v;
                         scanf(" %d",&v);
                         root = insert_node_to_tree(root,v); // call of insert function 
                         printf("Value %d has been inserted.\n",v);
                            
                        break;    
                    }
                    
                    case 2 : {
                         printf("Choose a value you want to delete: ");
                         int v;
                         scanf(" %d",&v);
                         bool c = false;
                         root = deleteNode(root,v,&c); // call of deleteNode 
                         if(c) {
                         printf("Value %d has been deleted from a tree.\n",v);
                         }
                         else {
                                 printf("Value not FOUND.\n");
                         }
                            
                        break;    
                    }
                     case 3 : {
                          
                          display(root,1); // just call of a print function, with level as well as a parameter
                            
                        break;    
                    }
                    
                      case 4 : {
                        int n = num_of_leafs(root); 
                        printf(" Number of leafs: %d\n",n);
                        break;    
                    }
                   case 5 : {
                         delete_everything(root); 
                         printf("Deletion of tree complete.\n");
                         root = NULL;
                        break;    
                    }            
                    
                 case 6 : {
                        printf("Choose a value that you want to search: ");
                         int v;
                         scanf(" %d",&v);
                         bool c = false;
                         search(root,v,&c);
                         if(c) { 
                         printf("Value %d has been found in a tree.\n",v);
                         }
                         else {
                                 printf("Value not FOUND.\n");
                         } 
                         
                            
                        break;    
                    }  
                    
                    
                 case 7 : {
                       printf("InOrder traversal: \n"); 
                       display_inorder(root);
                       
                        break;    
                    }     
               
                case 8 : {
                        printf("PostOrder traversal: \n");
                       display_postorder(root);
                        break;    
                    } 
                    
                   case 9 : {
                        printf("PreOrder traversal: \n");
                       display_preorder(root);
                        break;    
                    }
                    
             case 10 : {
                         struct bst_node *array[99]; 
                         int ind = 0;
                         printf("Storing nodes.\n");
                         
                         storeNodes(root,array,&ind);
                         
                         root = buildTree(array, 0, ind-1);

                        break;    
                    } 
                    
             
                    
                 case 11 : {
                         
                         printf("Inserting elements in BST\n");
                         int data_Array[] ={12,4,11,33,51,2,1,8,72,97,14,26,13,17,7,57,45,32};
                        int size = 18;
                       for (int i=0; i < size; i++) {
                               root = insert_node_to_tree(root,data_Array[i]); 
                       }

                         break;
                         
                 }
                 
                 
          
                    
                    
                    
                    case 12 : {
                         printf("Program has ended! \n");  
                        break;    
                    } 
                    
                    
            default : {
                    
                    printf("Wrong input,try it again!\n");
                    break;
            }                    
                    
            }
            
            
    }while(opt != 12); 

    return 0;
}

char doMenu ( void ) {
int option;
 /* Statements */
 printf( "\n=============== Menu ===============\n" );
 printf( " 1: Insert \n");
 printf( " 2: Delete \n");
 printf( " 3: Print \n");
 printf( " 4: Number of Leafs \n");
 printf( " 5: Destroy Tree \n");
 printf( " 6: Search \n");
 printf( " 7: InOrder \n" );
 printf( " 8: PostOrder \n" );
 printf( " 9: PreOrder \n" );
 printf( "10: Store nodes \n" );
 printf( "11: Inserting elements \n" );
 printf( "12: Quit \n" );
 printf( "====================================\n" );
 printf( "Your choice: " );
 scanf( " %d", &option );
 option = tolower ( option );
 return option;
} 
