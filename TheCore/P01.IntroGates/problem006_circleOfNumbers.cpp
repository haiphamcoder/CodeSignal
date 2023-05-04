#include <iostream>

using namespace std;

int solution(int n, int firstNumber)
{
    return (firstNumber + n / 2) % n;
}

int main()
{
    cout << solution(10, 2) << endl;
    return 0;
}