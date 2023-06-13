#include <iostream>

using namespace std;

int solution(int n, int m)
{
    return ~(n ^ m) & ((n ^ m) + 1);
}

int main()
{
    cout << solution(10, 11) << endl;
    return 0;
}