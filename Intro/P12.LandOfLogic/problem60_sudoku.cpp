#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool solution(vector<vector<int>> grid)
{
    set<int> s;
    for (int i = 0; i < 9; i++)
    {
        s.clear();
        for (int j = 0; j < 9; j++)
        {
            if (s.find(grid[i][j]) != s.end())
            {
                return false;
            }
            s.insert(grid[i][j]);
        }
    }
    for (int i = 0; i < 9; i++)
    {
        s.clear();
        for (int j = 0; j < 9; j++)
        {
            if (s.find(grid[j][i]) != s.end())
            {
                return false;
            }
            s.insert(grid[j][i]);
        }
    }
    for (int i = 0; i < 9; i += 3)
    {
        for (int j = 0; j < 9; j += 3)
        {
            s.clear();
            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    if (s.find(grid[i + k][j + l]) != s.end())
                    {
                        return false;
                    }
                    s.insert(grid[i + k][j + l]);
                }
            }
        }
    }
    return true;
}

int main()
{
    vector<vector<int>> grid = {{1, 3, 2, 5, 4, 6, 9, 8, 7},
                                {4, 6, 5, 8, 7, 9, 3, 2, 1},
                                {7, 9, 8, 2, 1, 3, 6, 5, 4},
                                {9, 2, 1, 4, 3, 5, 8, 7, 6},
                                {3, 5, 4, 7, 6, 8, 2, 1, 9},
                                {6, 8, 7, 1, 9, 2, 5, 4, 3},
                                {5, 7, 6, 9, 8, 1, 4, 3, 2},
                                {2, 4, 3, 6, 5, 7, 1, 9, 8},
                                {8, 1, 9, 3, 2, 4, 7, 6, 5}};
    cout << solution(grid) << endl;
    return 0;
}