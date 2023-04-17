#include <iostream>
using namespace std;

int solution(int n, int firstNumber)
{
    return (firstNumber + n / 2) % n;
}

int main()
{
    int n, firstNumber;
    cin >> n >> firstNumber;
    cout << solution(n, firstNumber) << endl;
    return 0;
}