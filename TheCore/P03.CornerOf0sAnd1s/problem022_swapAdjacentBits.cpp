#include <iostream>

using namespace std;

int solution(int n)
{
    return ((n & 0xAAAAAAAA) >> 1) | ((n & 0x55555555) << 1);
}

int main()
{
    cout << solution(13) << endl;
    return 0;
}