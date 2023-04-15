#include <iostream>
#include <string>
using namespace std;

bool solution(string inputString)
{
    int count[26] = {0};
    for (int i = 0; i < inputString.size(); i++)
    {
        count[inputString[i] - 'a']++;
    }
    int odd = 0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] % 2 != 0)
        {
            odd++;
        }
    }
    return odd < 2;
}

int main()
{
    string inputString = "aacdbb";
    cout << solution(inputString) << endl;
    return 0;
}