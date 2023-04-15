
#include <iostream>
#include <vector>
using namespace std;

vector<string> solution(vector<string> inputArray)
{
    int maxLength = 0;
    vector<string> result;
    for (int i = 0; i < inputArray.size(); i++)
    {
        int length = inputArray[i].length();
        if (length > maxLength)
        {
            maxLength = length;
            result.clear();
            result.insert(result.end(), inputArray[i]);
        }
        else if (length == maxLength)
        {
            result.insert(result.end(), inputArray[i]);
        }
    }
    return result;
}

int main()
{
    vector<string> inputArray = {"aba", "aa", "ad", "vcd", "aba"};
    vector<string> result = solution(inputArray);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}