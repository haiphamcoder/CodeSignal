#include <iostream>

using namespace std;

int solution(int n)
{
    return n / 10 + n % 10;
}

int main()
{
    cout << "37: " << solution(37) << endl;
    return 0;
}