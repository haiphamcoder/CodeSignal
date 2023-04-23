#include <iostream>

using namespace std;

int solution(int n)
{
    if (n >= 0 && n <= 9)
    {
        return 0;
    }
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return 1 + solution(sum);
}

int main()
{
    cout << solution(5) << endl;
    cout << solution(100) << endl;
    cout << solution(91) << endl;
    cout << solution(99) << endl;
    cout << solution(1000000000) << endl;
    return 0;
}
