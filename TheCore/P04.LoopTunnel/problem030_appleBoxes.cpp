#include <iostream>

using namespace std;

int solution(int k)
{
    int yellowApples = 0;
    int redApples = 0;
    for (int i = 1; i <= k; i++)
    {
        if (i % 2 == 0)
        {
            redApples += i * i;
        }
        else
        {
            yellowApples += i * i;
        }
    }
    return redApples - yellowApples;
}

int main()
{
    cout << solution(5) << endl;
    return 0;
}