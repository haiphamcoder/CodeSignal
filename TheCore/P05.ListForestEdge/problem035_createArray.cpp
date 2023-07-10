#include <iostream>
#include <vector>

using namespace std;

// Return array of lenght size filled with 1s
vector<int> solution(int size)
{
    vector<int> result(size, 1);
    return result;
}

int main()
{
    vector<int> result = solution(5);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}