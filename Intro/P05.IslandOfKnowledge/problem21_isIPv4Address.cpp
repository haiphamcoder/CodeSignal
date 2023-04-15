#include <iostream>
#include <string>
using namespace std;

bool solution(string inputString)
{
    int len = inputString.length();
    if (len > 15)
    {
        return false;
    }
    int count = 0;
    int start = -1;
    for (int i = 0; i <= len; i++)
    {
        if (inputString[i] == '.' || i == len)
        {
            int size = i - start - 1;
            if (size < 1 || size > 3)
            {
                return false;
            }
            string s = inputString.substr(start + 1, size);
            for (int j = 0; j < size; j++)
            {
                if (s[j] < '0' || s[j] > '9')
                {
                    return false;
                }
            }
            int number = stoi(s);
            if (to_string(number).length() == size && number >= 0 && number <= 255)
            {
                count++;
            }
            start = i;
        }
    }
    return count == 4;
}

int main()
{
    string inputString;
    cin >> inputString;
    cout << solution(inputString);
    return 0;
}