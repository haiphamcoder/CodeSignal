#include <iostream>

using namespace std;

int solution(int n)
{
    int digit = 0;
    int carry = 1;
    while (n > 0)
    {
        digit = n % 10;
        n /= 10;
        if (digit >= 5 && n > 0)
        {
            n++;
        }
        carry *= 10;
    }
    return digit * carry / 10;
}

int main()
{
    cout << solution(5) << endl;
    return 0;
}