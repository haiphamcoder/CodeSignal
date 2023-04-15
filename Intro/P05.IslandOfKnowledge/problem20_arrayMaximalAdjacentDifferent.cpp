#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> inputArray)
{
    int result = 0;
    for (int i = 0; i < inputArray.size() - 1; i++)
    {
        result = max(result, abs(inputArray[i] - inputArray[i + 1]));
    }
    return result;
}

int main()
{
    vector<int> inputArray = {2, 4, 1, 0};
    cout << solution(inputArray) << endl;
    return 0;
}