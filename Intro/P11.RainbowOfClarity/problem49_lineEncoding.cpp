#include <iostream>

using namespace std;

string solution(string s)
{
    string result = "";
    int count = 1;
    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i] != s[i - 1])
        {
            if (count > 1)
            {
                result += to_string(count);
            }
            result += s[i - 1];
            count = 1;
            continue;
        }
        count++;
    }
    return result;
}

int main()
{
    string s = "aabbbc";
    cout << solution(s) << endl;
    return 0;
}