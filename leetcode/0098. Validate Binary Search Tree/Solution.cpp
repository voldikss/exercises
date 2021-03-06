#include "../../include/global.hpp"
#include <bits/stdc++.h>

using namespace std;

#define TreeNode TreeNode<int>

class Solution {
  public:
    bool isValidBST(TreeNode* root) {
        return helper(root, INT64_MIN, INT64_MAX);
    }

    bool helper(TreeNode* node, long l, long h) {
        if (!node) return true;
        if (node->val <= l || node->val >= h) return false;
        return helper(node->left, l, node->val) && helper(node->right, node->val, h);
    }
};

int main() {
    Solution s;
    // vector<variant<int, nullptr_t>> nodes = {};
    vector<variant<int, nullptr_t>> nodes = {2, 1, 3, nullptr, nullptr};
    // vector<variant<int, nullptr_t>> nodes = {5, 1, 4, nullptr, nullptr, 3, 6, nullptr, nullptr, nullptr, nullptr};
    TreeNode* tree = build_binary_tree(nodes);
    cout << s.isValidBST(tree) << endl;
    return 0;
}
