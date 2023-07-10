#include <iostream>
#include <vector>

using namespace std;

// Replace all the occurrences of elemToReplace with substitutionElem.
vector<int> solution(vector<int> inputArray, int elemToReplace, int substitutionElem)
{
    for (int i = 0; i < inputArray.size(); i++)
    {
        if (inputArray[i] == elemToReplace)
        {
            inputArray[i] = substitutionElem;
        }
    }
    return inputArray;
}

int main()
{
    vector<int> inputArray = {1, 2, 1};
    vector<int> result = solution(inputArray, 1, 3);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}