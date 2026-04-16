#ifndef SINGLENUMBER_HPP
#define SINGLENUMBER_HPP

class singleNum
{
public:    
    std::vector<int> singleNumber(std::vector<int>& nums)
    {
        long long xorSum = 0;
        for (int n : nums)
            xorSum ^= n;
        
        int lowBit = xorSum & -xorSum;
        
        int a = 0, b = 0;
        
        for (int n : nums)
        {
            if (n & lowBit)
                a ^= n;
            else
                b ^= n;
        }
        
        return {a, b};
    }
};


#endif // SINGLENUMBER_HPP
