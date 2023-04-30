#include <iostream>

using namespace std;

int solution(int product)
{
    if (product == 0)
    {
        return 10;
    }
    if (product < 10)
    {
        return product;
    }
    int result = 0;
    int multiplier = 1;
    for (int i = 9; i > 1; i--)
    {
        while (product % i == 0)
        {
            result += i * multiplier;
            multiplier *= 10;
            product /= i;
        }
    }
    return (product == 1) ? result : -1;
}

int main()
{
    cout << solution(12) << endl;
    return 0;
}