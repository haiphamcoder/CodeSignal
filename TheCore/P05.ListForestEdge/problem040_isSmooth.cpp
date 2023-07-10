#include <iostream>
#include <vector>

using namespace std;

bool solution(vector<int> arr)
{
    int n = arr.size();
    int middle = 0;
    if (n % 2 == 0)
    {
        middle = arr[n / 2] + arr[n / 2 - 1];
    }
    else
    {
        middle = arr[n / 2];
    }
    return arr[0] == arr[n - 1] && arr[0] == middle;
}

int main()
{
    vector<int> arr = {7, 2, 2, 5, 10, 7};
    cout << solution(arr) << endl;
    return 0;
}