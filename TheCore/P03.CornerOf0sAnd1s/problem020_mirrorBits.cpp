#include <iostream>
using namespace std;

int solution(int a)
{
    int result = 0;
    while (a > 0)
    {
        int t = a & 1;
        result = (result << 1) + t;
        a >>= 1;
    }
    return result;
}

int main()
{
    cout << solution(97) << endl;
    return 0;
}