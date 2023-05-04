#include <iostream>
#include <cmath>

using namespace std;

int solution(int n)
{
    return pow(10, n) - 1;
}

int main()
{
    cout << solution(2) << endl;
    return 0;
}