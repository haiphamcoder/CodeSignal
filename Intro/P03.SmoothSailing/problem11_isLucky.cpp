#include <iostream>
#include <string>
using namespace std;

bool solution(int n)
{
    string s = to_string(n);
    int sum1 = 0, sum2 = 0;
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
    {
        sum1 += s[i];
        sum2 += s[s.size() - 1 - i];
    }
    return sum1 == sum2;
}

int main()
{
    int n;
    cin >> n;
    cout << solution(n) << endl;
}