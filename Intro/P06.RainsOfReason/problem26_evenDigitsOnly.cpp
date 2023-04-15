#include <iostream>

using namespace std;

bool solution(int n)
{
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    int n = 248622;
    cout << solution(n) << endl;
    return 0;
}