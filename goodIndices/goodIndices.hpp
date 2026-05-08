#ifndef GOODINDICES_HPP
#define GOODINDICES_HPP

#include <vector>
class Solution
{
    public:
        std::vector<int> goodIndices(std::vector<int>& nums, int k)
        {
            std::vector<int> result = {};
            int n = nums.size();
            if (n < k || n-k < 0)
                return result;
            for (int i = k; i < n-k; i++)
            {
                if (nums[i-k+1] - nums[i-k] != 1 || nums[i+])
            }
            return result;
        }
};

#endif
