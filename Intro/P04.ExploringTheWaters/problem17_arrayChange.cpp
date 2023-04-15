
#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> inputArray)
{
    int temp = inputArray[0] + 1;
    int result = 0;
    for (int i = 1; i < inputArray.size(); i++)
    {
        if (temp > inputArray[i])
        {
            result += temp - inputArray[i];
            temp++;
        }
        else
        {
            temp = inputArray[i] + 1;
        }
    }
    return result;
}

int main()
{
    vector<int> inputArray = {1, 1, 1};
    cout << solution(inputArray) << endl;
    return 0;
}