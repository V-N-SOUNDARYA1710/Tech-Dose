bool recursion(struct TreeNode* root,int fixedVal)
{
    if(root==NULL)
    {
        return true;
    }
    else
    {
        if(root->val!=fixedVal)
        {
            return false;
        }
        else
        {
            bool left=recursion(root->left,fixedVal);
            bool right=recursion(root->right,fixedVal);
            return right && left;
        }
    }
}
bool isUnivalTree(struct TreeNode* root)
{
    return recursion(root,root->val);
}
