// Balanced Binary Tree 
// Given a binary tree, determine if it is height-balanced.

// For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	bool isBalanced(TreeNode* root) {
		// when tree is empty,return true
		if(!root) {
			return true;
		}
		int depthDiff = abs(getDepth(root -> left) - getDepth(root -> right));
		if(depthDiff > 1) {
			return false;
		}
		// recursive check all subtrees of root
		return isBalanced(root -> left) && isBalanced(root -> right);
	}

	// recursive function to get depth of one node
	int getDepth(TreeNode* root) {
		if(!root) {
			return 0;
		}
		int leftDepth = getDepth(root -> left) + 1;
		int rightDepth = getDepth(root -> right) + 1;
		// return the max one of leftDepth and rightDepth
		return leftDepth > rightDepth ? leftDepth : rightDepth;

	}
}