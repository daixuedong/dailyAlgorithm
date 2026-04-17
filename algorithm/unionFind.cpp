#include <iostream>
#include <numeric>
#include <vector>

class UnionFind
{
public:
    UnionFind(int n): count(n)
    {
        parent.resize(n);
        std::iota(parent.begin(), parent.end(), 0);
    }
    
    // 找到
    int find(int x)
    {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }
    
    void unite(int x, int y)
    {
        int rootX = parent[x];
        int rootY = parent[y];
        if (rootX != rootY)
        {
            parent[rootX] = rootY;
            count--;
        }
    }
    
    // 判断是否联通
    bool connected(int x, int y)
    {
        return find(x) == find(y);
    }
    
    int getCount()
    {
        return count;
    }
    
private:
    std::vector<int> parent;
    int count; // 记录当前有多少独立的联通分量
};

int main()
{
    UnionFind uf(10);
    
    uf.unite(1, 2);
    uf.unite(2, 3);
    uf.unite(4, 5);
    
    std::cout << "1 和 3 是否连通? " << (uf.connected(1, 3) ? "是" : "否") << std::endl;
    std::cout << "1 和 4 是否连通? " << (uf.connected(1, 4) ? "是" : "否") << std::endl;
    std::cout << "当前的独立帮派数量: " << uf.getCount() << std::endl;

    
    return 0;
}
