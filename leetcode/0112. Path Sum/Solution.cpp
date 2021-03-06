#include "../../include/global.hpp"
#include <bits/stdc++.h>

using namespace std;

#define TreeNode TreeNode<int>

class Solution {
  public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (!root) return false;
        if (!root->left && !root->right) return root->val == sum;
        return this->hasPathSum(root->left, sum - root->val) || this->hasPathSum(root->right, sum - root->val);
    }
};

int main() {

    return 0;
}
