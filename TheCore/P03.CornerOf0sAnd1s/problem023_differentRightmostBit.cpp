#include <iostream>

using namespace std;

int solution(int n, int m)
{
    return (n ^ m) & (~(n ^ m) + 1);
}

int main()
{
    cout << solution(7, 55) << endl;
    return 0;
}