#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> votes, int k)
{
    int maxValue = *max_element(votes.begin(), votes.end());
    int countMax = count(votes.begin(), votes.end(), maxValue);
    if (k == 0)
    {
        if (countMax == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int count = 0;
    for (int i = 0; i < votes.size(); i++)
    {
        if (votes[i] + k > maxValue)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> votes = {2, 3, 5, 2};
    int k = 3;
    cout << solution(votes, k) << endl;
    return 0;
}