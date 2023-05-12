#include <iostream>

using namespace std;

bool solution(bool young, bool beautiful, bool loved)
{
    if (loved)
    {
        return !(young && beautiful);
    }
    return young && beautiful;
}

int main()
{
    cout << boolalpha << solution(true, true, true) << endl;
    return 0;
}