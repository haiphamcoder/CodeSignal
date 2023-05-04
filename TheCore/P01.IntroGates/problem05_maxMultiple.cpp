#include <iostream>

using namespace std;

int solution(int divisor, int bound)
{
    return bound - (bound % divisor);
}

int main()
{
    cout << solution(3, 10) << endl;
    return 0;
}