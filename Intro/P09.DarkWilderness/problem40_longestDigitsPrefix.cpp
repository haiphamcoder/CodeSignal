#include <iostream>

using namespace std;

string solution(string inputString)
{
    string result;
    for (int i = 0; i < inputString.length(); i++)
    {
        if (isdigit(inputString[i]))
        {
            result += inputString[i];
            continue;
        }
        break;
    }
    return result;
}

int main()
{
    string inputString = "123aa1";
    cout << solution(inputString) << endl;
    return 0;
}