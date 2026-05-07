#ifndef ISTOEPMATRIX_H
#define ISTOEPMATRIX_H

#include <cstdint>
#include <vector>
class Solution
{
public:
    bool isToepMatrix(std::vector<std::vector<int>>& matrix)
    {
        // 错位比较
        int m = matrix.size(), n = matrix[0].size();
        for (uint8_t i = 1; i < m; i++)
        {
            for (uint8_t j = 1; j < n; j++)
            {
                if (matrix[i][j] != matrix[i-1][j - 1])
                    return false;
            }
        }
        return true;
    }
};

#endif // !ISTOEPMATRIX_H
