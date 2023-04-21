#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> inputArray, int k)
{
    vector<int> result;
    for (int i = 0; i < inputArray.size(); i++)
    {
        if ((i + 1) % k)
        {
            result.push_back(inputArray[i]);
        }
    }
    return result;
}

int main()
{
    vector<int> inputArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 3;
    vector<int> result = solution(inputArray, k);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}