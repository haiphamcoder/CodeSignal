#include <iostream>

using namespace std;

bool solution(string inputString)
{
    int len = inputString.length();
    if (len != 17)
    {
        return false;
    }
    for (int i = 0; i < len; i++)
    {
        if (i % 3 == 2)
        {
            if (inputString[i] != '-')
            {
                return false;
            }
        }
        else
        {
            if (inputString[i] < '0' || inputString[i] > '9')
            {
                if (inputString[i] < 'A' || inputString[i] > 'F')
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    string inputString = "00-1B-63-84-45-E6";
    cout << solution(inputString) << endl;
    return 0;
}