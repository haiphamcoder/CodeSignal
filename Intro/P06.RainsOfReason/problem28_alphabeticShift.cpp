#include <iostream>

using namespace std;

string solution(string inputString)
{
    for (int i = 0; i < inputString.length(); i++)
    {
        if (inputString[i] == 'z')
        {
            inputString[i] = 'a';
        }
        else
        {
            inputString[i] += 1;
        }
    }
    return inputString;
}

int main()
{
    string inputString = "crazy";
    cout << solution(inputString) << endl;
    return 0;
}