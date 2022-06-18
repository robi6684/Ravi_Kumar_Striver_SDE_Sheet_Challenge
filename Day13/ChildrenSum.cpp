void changeTree(BinaryTreeNode < int > * root) {
    // Write your code here.
    if(root == NULL)
        return;
    int sum = 0;
    if(root -> left)
        sum += root->left->data;
    if(root -> right)
        sum+= root->right->data;
    if(sum < root -> data)
    {
        if(root -> left)
            root->left->data = root -> data;
         if(root -> right)
            root->right->data = root -> data;
    }
    else
    {
        root -> data = sum;
    }
    
    changeTree(root -> left);
    changeTree(root -> right);
    
    int val = 0;
    if(root -> left)
        val+= root -> left -> data;
    if(root -> right)
        val+= root -> right -> data;
    if(root -> left || root -> right)
        root -> data = val;
    
}  