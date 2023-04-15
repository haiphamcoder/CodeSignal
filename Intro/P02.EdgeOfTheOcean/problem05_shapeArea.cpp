#include <iostream>
using namespace std;

int solution(int n)
{
    //      n:   1   2   3   4   5   6   ...    n
    // append:   1   4   8   12  16  20  ...    4*(n-1)
    //      s:   1   5   13  25  41  61  ...    1 + 2*n*(n-1)

    return 1 + 2 * n * (n - 1);
}

int recursive(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return 4 * (n - 1) + recursive(n - 1);
}

int main()
{
    int n = 3;
    cout << "(Don't use recursive): The area of the " << n << "-interesting polygon is " << solution(n) << endl;
    cout << "(Use recursive): The area of the " << n << "-interesting polygon is " << recursive(n) << endl;
    return 0;
}