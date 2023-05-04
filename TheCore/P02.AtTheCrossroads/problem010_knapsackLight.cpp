#include <iostream>

using namespace std;

int solution(int value1, int weight1, int value2, int weight2, int maxW)
{
    if (maxW < weight1 && maxW < weight2)
    {
        return 0;
    }
    if (maxW >= weight1 && maxW < weight2)
    {
        return value1;
    }
    if (maxW >= weight2 && maxW < weight1)
    {
        return value2;
    }
    if (maxW >= weight1 && maxW >= weight2 && maxW < (weight1 + weight2))
    {
        return max(value1, value2);
    }
    return value1 + value2;
}

int main()
{
    int value1, weight1, value2, weight2, maxW;
    cin >> value1 >> weight1 >> value2 >> weight2 >> maxW;
    cout << solution(value1, weight1, value2, weight2, maxW) << endl;
    return 0;
}