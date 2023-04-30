#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

vector<vector<int>> solution(int n)
{
    vector<vector<int>> result(n, vector<int>(n, 0));
    int minRow = 0, maxRow = n - 1, minCol = 0, maxCol = n - 1;
    int value = 1;
    while (value <= n * n)
    {
        for (int i = minCol; i <= maxCol; i++)
        {
            result[minRow][i] = value++;
        }
        minRow++;
        for (int i = minRow; i <= maxRow; i++)
        {
            result[i][maxCol] = value++;
        }
        maxCol--;
        for (int i = maxCol; i >= minCol; i--)
        {
            result[maxRow][i] = value++;
        }
        maxRow--;
        for (int i = maxRow; i >= minRow; i--)
        {
            result[i][minCol] = value++;
        }
        minCol++;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> result = solution(n);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << setw(5) << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}