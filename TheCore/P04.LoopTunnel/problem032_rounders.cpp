#include <iostream>

using namespace std;

int solution(int n)
{
    int digit = 0;
    int carry = 1;
    while (1)
    {
        digit = n % 10;
        n /= 10;
        if (n == 0)
        {
            break;
        }
        if (digit >= 5)
        {
            n++;
        }
        carry *= 10;
    }
    return digit * carry;
}

int main()
{
    cout << solution(5) << endl;
    cout << solution(15) << endl;
    cout << solution(1234) << endl;
    cout << solution(1445) << endl;
    return 0;
}