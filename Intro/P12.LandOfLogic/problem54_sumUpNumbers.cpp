#include <iostream>
#include <string>

using namespace std;

int solution(string inputString)
{
    int len = inputString.length();
    int sum = 0;
    int number = 0;
    for (int i = 0; i <= len; i++)
    {
        if (isdigit(inputString[i]))
        {
            number = number * 10 + (inputString[i] - '0');
        }
        else
        {
            sum += number;
            number = 0;
        }
    }
    return sum;
}

int main()
{
    cout << solution("2 apples, 12 oranges") << endl;
    return 0;
}