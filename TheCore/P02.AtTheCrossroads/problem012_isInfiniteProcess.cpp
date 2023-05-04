#include <iostream>

using namespace std;

bool solution(int a, int b)
{
    return (a > b) || ((b - a) % 2 != 0);
}

int main()
{
    cout << solution(2, 6) << endl;
    return 0;
}