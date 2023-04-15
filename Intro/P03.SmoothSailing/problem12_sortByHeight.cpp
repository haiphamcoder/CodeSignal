#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> a)
{
    int size = a.size();
    for (int i = 0; i < size - 1; i++)
    {
        if (a[i] == -1)
        {
            continue;
        }
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] == -1)
            {
                continue;
            }
            if (a[j] < a[i])
            {
                swap(a[i], a[j]);
            }
        }
    }
    return a;
}

int main()
{
    vector<int> a = {-1, 150, 190, 170, -1, -1, 160, 180};
    vector<int> b = solution(a);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}