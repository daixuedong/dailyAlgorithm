#ifndef GOODINDICES_HPP
#define GOODINDICES_HPP

#include <vector>
class Solution
{
public:
    std::vector<int> goodIndices(std::vector<int>& nums, int k)
    {
        int n = nums.size();
        std::vector<int> left(n, 1), right(n, 1), result;

        // 左侧
        for (int i = 1; i < n; i++) {
            if (nums[i] <= nums[i-1])
                left[i] = left[i-1] + 1;
        }

        // 右侧
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] <= nums[i+1])
                right[i] = right[i+1] + 1;
        }

        for (int i = k; i < n - k; i++) {
            if (left[i-1] >= k && right[i+1] >= k) {
                result.push_back(i);
            }
        }
        return result;
    }
};

#endif
