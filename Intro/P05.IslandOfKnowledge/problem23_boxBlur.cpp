#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> image)
{
    int row = image.size();
    int col = image[0].size();
    vector<vector<int>> result(row - 2, vector<int>(col - 2));
    for (int i = 0; i < row - 2; i++)
    {
        for (int j = 0; j < col - 2; j++)
        {
            int sum = 0;
            for (int k = i; k < i + 3; k++)
            {
                for (int t = j; t < j + 3; t++)
                {
                    sum += image[k][t];
                }
            }
            result[i][j] = sum / 9;
        }
    }
    return result;
}

int main()
{
    vector<vector<int>> image;
    int row, col;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        for (int j = 0; j < col; j++)
        {
            int temp2;
            cin >> temp2;
            temp.push_back(temp2);
        }
        image.push_back(temp);
    }
    vector<vector<int>> result = solution(image);
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