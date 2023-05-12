#include <iostream>

using namespace std;

bool solution(bool young, bool beautiful, bool loved)
{
    if (loved)
    {
        if (young && beautiful)
        {
            return false;
        }
        return true;
    }
    else
    {
        if (young && beautiful)
        {
            return true;
        }
        return false;
    }
}

int main()
{
    cout << boolalpha << solution(true, true, true) << endl;
    return 0;
}