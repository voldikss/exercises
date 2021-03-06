#include "../../include/global.hpp"
#include <bits/stdc++.h>

using namespace std;

#define TreeNode TreeNode<int>

class Solution {
  public:
    map<TreeNode*, int> cache;
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        return abs(depth(root->left) - depth(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }

    int depth(TreeNode* node) {
        if (!node) return 1;
        if (cache.count(node)) return cache[node];
        int depth = max(this->depth(node->left), this->depth(node->right)) + 1;
        cache.insert({node, depth});
        return depth;
    }
};

int main() {

    return 0;
}
