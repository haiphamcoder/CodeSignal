#include <iostream>

using namespace std;

bool solution(int n)
{
    bool FoundNonZero = false;
    while (n > 0)
    {
        if (n % 10 != 0)
        {
            FoundNonZero = true;
        }
        else
        {
            if (FoundNonZero)
            {
                return true;
            }
        }
        n /= 10;
    }
    return false;
}

int main()
{
    cout << solution(902200100) << endl;
    return 0;
}