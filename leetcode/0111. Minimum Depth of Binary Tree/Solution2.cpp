#include "../../include/global.hpp"
#include <bits/stdc++.h>

using namespace std;

#define TreeNode TreeNode<int>

class Solution {
    long res = INT64_MAX;

  public:
    int minDepth(TreeNode* root) {
        return this->helper(root, 0);
    }

  private:
    int helper(TreeNode* root, int depth) {
        if (depth > this->res) return depth;
        if (!root) return depth;
        if (!root->left && !root->right) return depth + 1;
        if (!root->left) return this->helper(root->right, depth + 1);
        if (!root->right) return this->helper(root->left, depth + 1);
        int curdepth = min(this->helper(root->left, depth + 1), this->helper(root->right, depth + 1));
        this->res = curdepth;
        return curdepth;
    }
};

int main() {

    return 0;
}
