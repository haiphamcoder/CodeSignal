#include <iostream>

using namespace std;

int solution(int n)
{
    int fact = 1;
    int i = 2;
    while (fact < n)
    {
        fact *= i;
        i++;
    }
    return fact;
}

int main()
{
    cout << solution(17) << endl;
    return 0;
}