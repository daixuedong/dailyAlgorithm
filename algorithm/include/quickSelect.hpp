#ifndef QUICKSELECT_HPP
#define QUICKSELECT_HPP

#include "alInclude.hpp"
#include <utility>

class quick_select
{
private:
    // 分区函数：将比pivot小的换到左边，比pivot大的换到右边
    int partition(std::vector<int>& nums, int left, int right)
    {
        int pivot = nums[left]; // 选第一个作为基准
        int l = left + 1, r = right;
        
        while (l <= r)
        {
            if (nums[l] <= pivot)
                l++;
            else if (nums[r] >= pivot)
                r--;
            else
                std::swap(nums[l], nums[r]);
        }
        std::swap(nums[left], nums[r]);
        return r;
    }
    
public:
    // 快速选择递归函数
    int quickSelect(std::vector<int>& nums, int left, int right, int k)
    {
        if (left == right)
            return nums[left];
        
        // 进行分区
        int p = partition(nums, left, right);
        
        if (p == k)
            return nums[p];
        else if (p > k)
            return quickSelect(nums, left, p - 1, k);
        else
            return quickSelect(nums, p + 1, right, k);
    }
};

#endif // QUICKSELECT_HPP
