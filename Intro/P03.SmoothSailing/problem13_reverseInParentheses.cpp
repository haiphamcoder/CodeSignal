#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

string solution(string inputString)
{
    int len = inputString.length();
    stack<int> s;
    for (int i = 0; i < len; i++)
    {
        if (inputString[i] == '(')
        {
            s.push(i);
        }
        else if (inputString[i] == ')' && !s.empty())
        {
            reverse(inputString.begin() + s.top() + 1, inputString.begin() + i);
            s.pop();
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (inputString[i] == '(' || inputString[i] == ')')
        {
            inputString.erase(i, 1);
            i--;
            len--;
        }
    }
    return inputString;
}

int main()
{
    string inputString = "foo(bar(baz))blim";
    string outputString = solution(inputString);
    cout << outputString << endl;
    return 0;
}