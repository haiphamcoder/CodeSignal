#include <iostream>

using namespace std;

int solution(int n)
{
    return ~n & ((n | (n + 1)) + 1);
}

int main()
{
    cout << solution(37) << endl;
    return 0;
}