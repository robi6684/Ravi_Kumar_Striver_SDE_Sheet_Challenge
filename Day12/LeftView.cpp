void leftView(TreeNode<int> *root,int level,int &maxlevel,vector<int>&ans)
    {
        if(root == NULL)
            return;
        if(maxlevel < level)
        {
            ans.push_back(root -> data);
            maxlevel += 1;
        }
        leftView(root -> left,level+1,maxlevel,ans);
        leftView(root -> right,level+1,maxlevel,ans);
        
    }

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
        int maxlevel = 0;
        int level = 1;
        vector<int> ans;
        
        leftView(root,level,maxlevel,ans);
        return ans;
}