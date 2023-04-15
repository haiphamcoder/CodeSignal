#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> a)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (i % 2 == 0)
        {
            sum1 += a[i];
        }
        else
        {
            sum2 += a[i];
        }
    }
    vector<int> result = {sum1, sum2};
    return result;
}

int main()
{
    vector<int> a = {50, 60, 60, 45, 70};
    vector<int> b = solution(a);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}