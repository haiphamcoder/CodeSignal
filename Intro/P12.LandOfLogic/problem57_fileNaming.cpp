#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> names)
{
    vector<string> result;
    for (int i = 0; i < names.size(); i++)
    {
        string name = names[i];
        int count = 1;
        while (find(result.begin(), result.end(), name) != result.end())
        {
            name = names[i] + "(" + to_string(count) + ")";
            count++;
        }
        result.push_back(name);
    }
    return result;
}

int main()
{
    vector<string> names = {"doc", "doc", "image", "doc(1)", "doc"};
    vector<string> result = solution(names);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}