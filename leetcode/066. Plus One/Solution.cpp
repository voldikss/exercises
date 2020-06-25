#include <algorithm>
#include <cassert>
#include <climits>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
    for (auto x : vec) os << x << " ";
    return os;
}

template <typename T>
ostream &operator<<(ostream &os, const vector<vector<T>> &vec) {
    for (auto &x : vec) os << x << endl;
    return os;
}

class Solution {
  public:
    vector<int> plusOne(vector<int> &digits) {
        int i = digits.size() - 1;
        int flag = 1;
        while (i >= 0) {
            flag += digits[i];
            digits[i] = flag % 10;
            flag /= 10;
            if (!flag) return digits;
            i--;
        }
        if (flag) digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution s;
    vector<int> digits{1, 2, 3};
    // vector<int> digits{9, 9, 9};
    auto res = s.plusOne(digits);
    cout << res << endl;
    return 0;
}
