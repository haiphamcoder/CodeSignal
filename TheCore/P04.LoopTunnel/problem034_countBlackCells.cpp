#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n, int m)
{
    return n + m + __gcd(n, m) - 2;
}

int main()
{
    cout << solution(3, 4) << endl;
    return 0;
}