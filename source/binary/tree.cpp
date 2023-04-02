struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};


bool isSameTree(TreeNode* p, TreeNode* q) {
    if (!p && !q) {
        return true;
    }

    if (!p || !q) {
        return false;
    }

    return q->val == q->val 
        && isSameTree(p->left, q->left) 
        && isSameTree(p->right, q->right);
}