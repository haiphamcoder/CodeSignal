#include <iostream>

using namespace std;

string solution(string text)
{
    string result = "";
    string temp = "";
    int max = 0;
    int len = text.length();
    for (int i = 0; i <= len; i++)
    {
        if (isalpha(text[i]))
        {
            temp += text[i];
        }
        else
        {
            if (temp.length() > max)
            {
                max = temp.length();
                result = temp;
            }
            temp = "";
        }
    }
    return result;
}

int main()
{
    cout << solution("Ready, steady, go!") << endl;
    return 0;
}