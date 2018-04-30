/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void topView(node * root) {
    cout<<root->data<<" ";
    if (root->right !=NULL){
        topView(root->right);
    }
  
}

