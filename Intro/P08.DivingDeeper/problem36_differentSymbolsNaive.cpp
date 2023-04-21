#include <iostream>

using namespace std;

int solution(string inputString)
{
    int count[26] = {0};
    for (int i = 0; i < inputString.length(); i++)
    {
        count[inputString[i] - 'a']++;
    }
    int result = 0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            result++;
        }
    }
    return result;
}

int main()
{
    string inputString;
    cin >> inputString;
    cout << solution(inputString) << endl;
    return 0;
}