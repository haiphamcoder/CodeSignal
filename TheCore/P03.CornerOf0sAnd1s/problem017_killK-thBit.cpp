#include <iostream>

using namespace std;

int solution(int n, int k)
{
    return n & ~(1 << (k - 1));
}

int main()
{
    cout << solution(37, 3) << endl;
    return 0;
}