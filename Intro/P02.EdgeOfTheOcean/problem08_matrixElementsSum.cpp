#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int>> matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int sum = 0;
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            if (matrix[i][j] != 0)
            {
                sum += matrix[i][j];
            }
            else
            {
                break;
            }
        }
    }
    return sum;
}

int main()
{
    vector<vector<int>> matrix = {{0, 1, 1, 2}, {0, 5, 0, 0}, {2, 0, 3, 3}};
    cout << solution(matrix) << endl;
    return 0;
}