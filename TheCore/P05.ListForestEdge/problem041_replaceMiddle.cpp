#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    int size = arr.size();
    if (size % 2 == 0)
    {
        arr[size / 2 - 1] += arr[size / 2];
        arr.erase(arr.begin() + size / 2);
    }
    return arr;
}

int main()
{
    vector<int> arr = {7, 2, 2, 5, 10, 7};
    vector<int> result = solution(arr);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}