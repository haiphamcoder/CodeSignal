#include <iostream>

using namespace std;

bool solution(string inputString)
{
    int count[26] = {0};
    for (int i = 0; i < inputString.length(); i++)
    {
        count[inputString[i] - 'a']++;
    }
    for (int i = 1; i < 26; i++)
    {
        if (count[i] > count[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << solution("bbbaacdafe") << endl;
    return 0;
}