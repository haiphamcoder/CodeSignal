#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> statues)
{
    auto minmax = minmax_element(statues.begin(), statues.end());
    return *minmax.second - *minmax.first + 1 - statues.size();
}

int main()
{
    vector<int> statues = {6, 2, 3, 8};
    cout << solution(statues) << endl;
    return 0;
}