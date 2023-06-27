#include <iostream>

using namespace std;

int solution(string commands)
{
    int a = 0, b = 0;
    int count = 0;
    for (int i = 0; i < commands.size(); i++)
    {
        if (commands[i] == 'L')
        {
            a = (a + 3) % 4;
            b = (b + 1) % 4;
        }

        else if (commands[i] == 'R')
        {
            a = (a + 1) % 4;
            b = (b + 3) % 4;
        }
        else
        {
            a = (a + 2) % 4;
            b = (b + 2) % 4;
        }

        if (a == b)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    cout << solution("LLARL") << endl;
    return 0;
}