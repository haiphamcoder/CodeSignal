#include <iostream>

using namespace std;

int solution(int n)
{
    int hours = n / 60;
    int minutes = n % 60;
    return hours / 10 + hours % 10 + minutes / 10 + minutes % 10;
}

int main()
{
    cout << solution(240) << endl;
    return 0;
}