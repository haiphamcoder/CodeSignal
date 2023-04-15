#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<bool>> matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    vector<vector<int>> result(row, vector<int>(col));
    vector<bool> temp(col + 2);
    for (int i = 0; i < row; i++)
    {
        matrix[i].insert(matrix[i].begin(), false);
        matrix[i].insert(matrix[i].end(), false);
    }
    matrix.insert(matrix.begin(), temp);
    matrix.insert(matrix.end(), temp);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            int count = 0;
            for (int k = i - 1; k <= i + 1; k++)
            {
                for (int t = j - 1; t <= j + 1; t++)
                {
                    if (k == i && t == j)
                    {
                        continue;
                    }
                    count += matrix[k][t];
                }
            }
            result[i - 1][j - 1] = count;
        }
    }
    return result;
}

int main()
{
    vector<vector<bool>> matrix = {{true, false, false},
                                   {false, true, false},
                                   {false, false, false}};
    vector<vector<int>> result = solution(matrix);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}