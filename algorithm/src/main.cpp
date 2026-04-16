#include "main.hpp"

int main()
{
    quick_select qs;
    singleNum sn;
   
    std::vector<int> nums = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k = 4;
    
    int result = qs.quickSelect(nums, 0, nums.size() - 1, k - 1);
    
    std::cout << "数组中第" << k << "小的元素是：" << result << std::endl;
    

    
    std::vector<int> nums1 = {1, 2, 1, 3, 2, 5};
    std::vector<int> res = sn.singleNumber(nums1);
    std::cout << "两个单数分别是: " << res[0] << " 和 " << res[1] << std::endl;
    return 0;
    
    return 0;
}
