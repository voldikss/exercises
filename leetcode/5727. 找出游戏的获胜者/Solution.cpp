#include <algorithm>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    int findTheWinner(int n, int k) {
        if (n == 1) return 1;
        int index = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++) v[i] = i + 1;
        while (true) {
            if ((index + 1) % k != 0) v.push_back(v[index]);
            index++;
            if (index == v.size() - 1) break;
        }
        return v[index];
    }
};

int main(int argc, char** argv) {

    return 0;
}
