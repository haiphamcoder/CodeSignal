#include <iostream>
using namespace std;

int solution(int deposit, int rate, int threshold)
{
    int years = 0;
    double balance = deposit;
    while (balance < threshold)
    {
        balance += balance * rate / 100.0;
        years++;
    }
    return years;
}

int main()
{
    int deposit, rate, threshold;
    cin >> deposit >> rate >> threshold;
    cout << solution(deposit, rate, threshold) << endl;
    return 0;
}