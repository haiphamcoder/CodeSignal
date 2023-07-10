#include <iostream>
#include <vector>

using namespace std;

// swap its first and last elements and return the resulting array
vector<int> solution(vector<int> arr)
{
    if (arr.size() > 1)
    {
        int temp = arr[0];
        arr[0] = arr[arr.size() - 1];
        arr[arr.size() - 1] = temp;
    }
    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> result = solution(arr);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}