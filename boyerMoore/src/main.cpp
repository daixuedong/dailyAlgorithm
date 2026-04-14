#include <iostream>
#include <vector>

int boyermoore(std::vector<int>& nums)
{
    int canditate = 0;
    int count = 0;
    
    for (int num : nums)
    {
        if (count == 0)
        {
            canditate = num;
            count = 1;
        }
        else if (num == canditate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return canditate;
}

int main()
{
    std::vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    std::cout << "多数元素是:" << boyermoore(nums) << std::endl;
    return 0;
}
