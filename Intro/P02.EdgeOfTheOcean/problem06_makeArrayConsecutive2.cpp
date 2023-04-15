#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> statues)
{
    auto a = minmax_element(statues.begin(), statues.end());
    return *a.second - *a.first + 1 - statues.size();
}

int main()
{
    vector<int> statues = {4, 3, 7, 6, 9};
    cout << solution(statues) << endl;
    return 0;
}