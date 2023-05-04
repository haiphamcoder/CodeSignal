#include <iostream>

using namespace std;

bool solution(int a, int b, int c)
{
    if (a + b == c || a - b == c || a * b == c || (a / b == c && a % b == 0))
    {
        return true;
    }
    return false;
}

int main()
{
    cout << solution(2, 3, 5) << endl;
    return 0;
}