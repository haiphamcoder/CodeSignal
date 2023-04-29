#include <iostream>
#include <vector>
#include <set>

using namespace std;

int solution(vector<vector<int>> matrix)
{
    set<vector<int>> s;
    for (int i = 0; i < matrix.size() - 1; i++)
    {
        for (int j = 0; j < matrix[i].size() - 1; j++)
        {
            vector<int> v;
            v.push_back(matrix[i][j]);
            v.push_back(matrix[i][j + 1]);
            v.push_back(matrix[i + 1][j]);
            v.push_back(matrix[i + 1][j + 1]);
            s.insert(v);
        }
    }
    return s.size();
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 1},
                                  {2, 2, 2},
                                  {2, 2, 2},
                                  {1, 2, 3},
                                  {2, 2, 1}};
    cout << solution(matrix) << endl;
    return 0;
}