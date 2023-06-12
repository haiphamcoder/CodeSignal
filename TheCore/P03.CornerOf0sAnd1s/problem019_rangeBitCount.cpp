#include <iostream>
using namespace std;

int solution(int a, int b)
{
    int result = 0;
    for (int i = a; i <= b; i++)
    {
        int temp = i;
        while (temp > 0)
        {
            result += temp & 1;
            temp >>= 1;
        }
    }
    return result;
}

int main()
{
    cout << solution(2, 7) << endl;
    return 0;
}