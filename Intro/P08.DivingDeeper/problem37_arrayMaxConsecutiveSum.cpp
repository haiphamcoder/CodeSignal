#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> inputArray, int k)
{
    int result = 0;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += inputArray[i];
    }
    result = sum;
    for (int i = k; i < inputArray.size(); i++)
    {
        sum += inputArray[i] - inputArray[i - k];
        result = max(result, sum);
    }
    return result;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> inputArray(n);
    for (int i = 0; i < n; i++)
    {
        cin >> inputArray[i];
    }
    cout << solution(inputArray, k ) << endl;
    return 0;
}