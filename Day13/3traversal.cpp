vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> inorder;
    vector<int> preorder;
    vector<int> postorder;
    if(root == NULL)
        return ans;
    
    stack<pair<BinaryTreeNode<int>*,int>> s;
    s.push({root,1});
    
    
    while(!s.empty())
    {
        auto it = s.top();
        s.pop();
        
        if(it.second == 1)
        {
            preorder.push_back(it.first -> data);
            it.second += 1;
            s.push(it);
            if(it.first -> left)
                s.push({it.first -> left,1});
        }
        else if(it.second == 2)
        {
            inorder.push_back(it.first -> data);
            it.second += 1;
            s.push(it);
            if(it.first -> right)
                s.push({it.first -> right,1});
        }
        else
        {
            postorder.push_back(it.first -> data);
        }
    }
    ans.push_back(inorder);
    ans.push_back(preorder);
    ans.push_back(postorder);
    return ans;
}