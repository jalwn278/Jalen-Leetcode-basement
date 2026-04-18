/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
    if (p == NULL || q == NULL)
    {
        return p == q;
    }

    bool isLeft = isSameTree(p->left, q->left);
    bool isRight = isSameTree(p->right, q->right);

    return isLeft && isRight && p->val == q->val;
}

bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
    if (root == NULL)
    {
        return false;
    }

    if (root->val == subRoot->val && isSameTree(root, subRoot))
    {
        return true;
    }


    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);

}