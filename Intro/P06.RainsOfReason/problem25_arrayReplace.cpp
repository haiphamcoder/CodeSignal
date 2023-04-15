#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> inputArray, int elemToReplace, int substitutionElem)
{
    vector<int> result;
    for (int x : inputArray)
    {
        if (x == elemToReplace)
            result.push_back(substitutionElem);
        else
            result.push_back(x);
    }
    return result;
}

int main()
{
    vector<int> inputArray = {1, 2, 1};
    int elemToReplace = 1;
    int substitutionElem = 3;
    vector<int> outputArray = solution(inputArray, elemToReplace, substitutionElem);
    for (int i = 0; i < outputArray.size(); i++)
    {
        cout << outputArray[i] << " ";
    }
    return 0;
}