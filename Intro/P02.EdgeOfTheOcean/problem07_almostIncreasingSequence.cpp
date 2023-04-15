#include <iostream>
#include <vector>
using namespace std;

bool solution(vector<int> sequence)
{
    int size = sequence.size();
    if (size < 3)
    {
        return false;
    }
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (sequence[i] >= sequence[i + 1])
        {
            count++;
            if (count > 1)
            {
                return false;
            }
            if (i > 0 && i < size - 2 && sequence[i] >= sequence[i + 2] && sequence[i - 1] >= sequence[i + 1])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<int> sequence = {1, 3, 2, 4};
    cout << solution(sequence) << endl;
    return 0;
}