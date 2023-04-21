#include <iostream>

using namespace std;

char solution(string inputString)
{
    char result = 0;
    for (int i = 0; i < inputString.length(); i++)
    {
        if (inputString[i] >= '0' && inputString[i] <= '9')
        {
            result = inputString[i];
            break;
        }
    }
    return result;
}

int main()
{
    string inputString;
    cin >> inputString;
    cout << solution(inputString);
    return 0;
}