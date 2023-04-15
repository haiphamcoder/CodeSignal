#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> inputArray)
{
    int step = 2;
    int size = inputArray.size();
    for (int i = 0; i < size; i++)
    {
        if (inputArray[i] % step == 0)
        {
            step++;
            i = -1;
        }
    }
    return step;
}

int main()
{
    vector<int> inputArray;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        inputArray.push_back(temp);
    }
    cout << solution(inputArray);
    return 0;
}