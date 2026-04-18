# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:

        # when it arrive its bottom, when check ones bottom when check its left and right are both null or not 
        if not p or not q:
            return p == q

        #for the bottom and for its parent 
        if p and q:
            return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right) and p.val == q.val
        #called recursion when input self.issametree