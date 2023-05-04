#include <iostream>

using namespace std;

int solution(int n, int m)
{
    return m - (m % n);
}

int main()
{
    cout << "3, 10: " << solution(3, 10) << endl;
    return 0;
}