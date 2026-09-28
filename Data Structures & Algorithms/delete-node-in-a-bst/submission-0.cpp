class Solution {
public:

    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> ans;

        if(root == NULL)
            return ans;

        vector<int> left = inorderTraversal(root->left);
        ans.insert(ans.end(), left.begin(), left.end());

        ans.push_back(root->val);

        vector<int> right = inorderTraversal(root->right);
        ans.insert(ans.end(), right.begin(), right.end());

        return ans;
    }

    int find(int target, vector<int>& ans) {

        for(int i = 0; i < ans.size(); i++) {

            if(ans[i] == target && i + 1 < ans.size()) {
                return ans[i + 1];
            }
        }

        return -1;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {

        if(root == NULL)
            return root;

        vector<int> ans = inorderTraversal(root);

        // Search left
        if(key < root->val) {

            root->left = deleteNode(root->left, key);
        }

        // Search right
        else if(key > root->val) {

            root->right = deleteNode(root->right, key);
        }

        // Found the node
        else {

            // No child
            if(root->left == NULL && root->right == NULL) {

                return NULL;
            }

            // Only right child
            else if(root->left == NULL) {

                return root->right;
            }

            // Only left child
            else if(root->right == NULL) {

                return root->left;
            }

            // Two children
            else {

                int successor = find(key, ans);

                root->val = successor;

                root->right = deleteNode(root->right, successor);
            }
        }

        return root;
    }
};