#include <iostream>

using namespace std;

int solution(int a, int b, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a * b;
        a++;
        b++;
    }
    return sum;
}

int main(){
    cout << solution(1, 2, 2) << endl;
    return 0;
}