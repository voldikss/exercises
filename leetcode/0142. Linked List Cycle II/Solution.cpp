#include "../../include/global.hpp"
#include <bits/stdc++.h>

using namespace std;

#define ListNode ListNode<int>

class Solution {
  public:
    ListNode* detectCycle(ListNode* head) {
        if (!head || !head->next) return nullptr;
        ListNode* meet = nullptr;
        ListNode* slow = head;
        ListNode* fast = head;
        while (true) {
            slow = slow->next;
            fast = fast->next;
            if (!fast || !fast->next) return nullptr;
            fast = fast->next;
            if (slow == fast) {
                meet = slow;
                break;
            }
        }
        ListNode* p1 = head;
        ListNode* p2 = meet;
        while (p1 != p2) {
            p1 = p1->next;
            p2 = p2->next;
        }
        return p1;
    }
};

int main() {

    return 0;
}
