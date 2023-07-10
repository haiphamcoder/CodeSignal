#include <iostream>
#include <vector>

using namespace std;

// obtain the array formed by the elements of a followed by the elements of b
vector<int> solution(vector<int> a, vector<int> b)
{
    vector<int> result;
    for (int i = 0; i < a.size(); i++)
    {
        result.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); i++)
    {
        result.push_back(b[i]);
    }
    return result;
}

int main()
{
    vector<int> a = {2, 2, 1};
    vector<int> b = {10, 11};
    vector<int> result = solution(a, b);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}