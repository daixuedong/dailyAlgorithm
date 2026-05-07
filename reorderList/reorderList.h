#ifndef REORDERLIST_H
#define REORDERLIST_H

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

#include <vector>
class Solution
{
public:
    void reorderList(ListNode* head)
    {
        if (!head || !head->next ||!head->next->next)
            return;
        std::vector<ListNode*> nodes;
        ListNode* curr = head;
        while (curr)
        {
            nodes.push_back(curr);
            curr = curr->next;
        }
        int left = 0, right = nodes.size() - 1;
        while (right > left)
        {
            nodes[left]->next = nodes[right];
            left++;
            if (left == right)
                break;
            nodes[right]->next = nodes[left];
            right--;
        }
        nodes[left]->next = nullptr;
    }
};
#endif // !REORDERLIST_H
