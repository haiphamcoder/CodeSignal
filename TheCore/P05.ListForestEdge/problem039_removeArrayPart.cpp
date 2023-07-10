#include <iostream>
#include <vector>

using namespace std;

// remove a part of a given array between given 0-based indexes l and r (inclusive)
vector<int> solution(vector<int> inputArray, int l, int r)
{
    vector<int> result;
    for (int i = 0; i < inputArray.size(); i++)
    {
        if (i < l || i > r)
        {
            result.push_back(inputArray[i]);
        }
    }
    return result;
}

int main()
{
    vector<int> inputArray = {2, 3, 2, 3, 4, 5};
    int l = 2;
    int r = 4;
    vector<int> result = solution(inputArray, l, r);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}