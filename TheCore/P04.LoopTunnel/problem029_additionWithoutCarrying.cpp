#include <iostream>

using namespace std;

int solution(int param1, int param2)
{
    int heso = 1;
    int result = 0;
    while (param1 > 0 || param2 > 0)
    {
        result += (param1 % 10 + param2 % 10) % 10 * heso;
        heso *= 10;
        param1 /= 10;
        param2 /= 10;
    }
    return result;
}

int main()
{
    cout << solution(456, 1734) << endl;
    return 0;
}