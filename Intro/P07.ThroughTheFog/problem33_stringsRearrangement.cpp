#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isDiffByOneChar(string s1, string s2)
{
    int count = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
            count++;
        if (count > 1)
            return false;
    }
    return (count == 1);
}

void Try(vector<string> &inputArray, vector<bool> &used, vector<string> &result, bool &found)
{
    if (found)
        return;
    if (result.size() == inputArray.size())
    {
        for (int i = 0; i < result.size() - 1; i++)
        {
            if (!isDiffByOneChar(result[i], result[i + 1]))
                return;
        }
        found = true;
    }
    else
    {
        for (int i = 0; i < inputArray.size(); i++)
        {
            if (!used[i])
            {
                used[i] = true;
                result.push_back(inputArray[i]);
                Try(inputArray, used, result, found);
                used[i] = false;
                result.pop_back();
            }
        }
    }
}

bool solution(vector<string> inputArray)
{
    vector<bool> used(inputArray.size(), false);
    vector<string> result;
    bool found = false;
    Try(inputArray, used, result, found);
    return found;
}

int main()
{
    vector<string> inputArray = {"ab", "bb", "aa"};
    cout << solution(inputArray);
    return 0;
}