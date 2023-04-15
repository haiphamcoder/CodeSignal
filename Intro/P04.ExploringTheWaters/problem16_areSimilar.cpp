#include <iostream>
#include <vector>
using namespace std;

bool solution(vector<int> a, vector<int> b)
{
    int size = a.size();
    int count = 0;
    int a1, a2, b1, b2;
    for (int i = 0; i < size; i++)
    {
        if (a[i] != b[i])
        {
            count++;
            if (count == 1)
            {
                a1 = a[i];
                b1 = b[i];
            }
            else if (count == 2)
            {
                a2 = a[i];
                b2 = b[i];
            }
            else
            {
                break;
            }
        }
    }
    if (count == 0)
    {
        return true;
    }
    if (count == 2)
    {
        return a1 == b2 && a2 == b1;
    }
    return false;
}

int main()
{
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    cout << solution(a, b) << endl;
    return 0;
}