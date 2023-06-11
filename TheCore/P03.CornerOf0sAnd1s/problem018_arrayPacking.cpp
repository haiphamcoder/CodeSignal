#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> a)
{
    int result = a[0];
    int dis = 8;
    for (int i = 1; i < a.size(); i++)
    {
        result += a[i] << dis;
        dis += 8;
    }
    return result;
}

int main()
{
    cout << solution({24, 85, 0}) << endl;
    return 0;
}