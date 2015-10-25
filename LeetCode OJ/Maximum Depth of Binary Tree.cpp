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
	int maxDepth(TreeNode* root) {
		if (!root)return max;
		++cnt;
		if (root->left)maxDepth(root->left);
		if (root->right)maxDepth(root->right);
		if (cnt>max)max = cnt;
		--cnt;
		return max;
	}

private:
	int cnt = 0;
	int max = 0;
};

//Runtime: 8 ms
//Your runtime beats 12.44% of cpp submissions