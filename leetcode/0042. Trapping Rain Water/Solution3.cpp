#include "../../include/global.hpp"
#include <bits/stdc++.h>

using namespace std;

// 单调栈
class Solution {
  public:
    int trap(vector<int>& height) {
        int n = height.size();
        int res = 0;
        int h;
        int height_diff;
        int w;
        stack<int> s;
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && height[i] > height[s.top()]) {
                h = height[s.top()];
                s.pop();
                if (s.empty()) break;
                w = i - s.top() - 1;
                height_diff = min(height[i], height[s.top()]) - h;
                res += height_diff * (i - s.top() - 1);
            }
            s.push(i);
        }
        return res;
    }
};

int main() {
    vector<int> input = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    // vector<int> input = {};
    // vector<int> input = {9,0,0,0,9};
    // vector<int> input = {1,1,1,1,1};
    Solution s;
    int res = s.trap(input);
    cout << res << endl;
}
