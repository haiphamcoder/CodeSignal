#include <iostream>

using namespace std;

int solution(int a, int b, int c)
{
    if (a == b)
    {
        return c;
    }
    if (a == c)
    {
        return b;
    }
    return a;
}

int main()
{
    cout << solution(2, 7, 2) << endl;
    return 0;
}