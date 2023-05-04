#include <iostream>

using namespace std;

int solution(int min1, int min2_10, int min11, int s)
{
    int longestTime = 0;
    if (s >= min1)
    {
        longestTime++;
        s -= min1;
        if (s >= min2_10 * 9)
        {
            longestTime += 9;
            s -= min2_10 * 9;
            longestTime += s / min11;
        }
        else
        {
            longestTime += s / min2_10;
        }
    }
    return longestTime;
}

int main()
{
    cout << solution(3, 1, 2, 20) << endl;
    return 0;
}