#include "main.hpp"

int main()
{
    quick_select qs;
    std::vector<int> nums = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k = 4;
    
    int result = qs.quickSelect(nums, 0, nums.size() - 1, k - 1);
    
    std::cout << "数组中第" << k << "小的元素是：" << result << std::endl;
    
    
    return 0;
}
