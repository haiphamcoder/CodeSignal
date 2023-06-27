#include <iostream>

using namespace std;

int solution(int n, int l, int r)
{
    int mid = n / 2;
    int count = 0;
    for (int i = l; i <= mid; i++)
    {
        if (n - i <= r)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    cout << solution(6, 2, 4) << endl;
    return 0;
}