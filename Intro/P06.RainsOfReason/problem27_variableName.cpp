#include <iostream>
#include <string>
#include <regex>

using namespace std;

bool validate(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return true;
    }
    if (c >= 'A' && c <= 'Z')
    {
        return true;
    }
    if (c >= '0' && c <= '9')
    {
        return true;
    }
    if (c == '_')
    {
        return true;
    }
    return false;
}

bool solution(string name)
{
    if (validate(name[0]))
    {
        if (name[0] >= '0' && name[0] <= '9')
        {
            return false;
        }
    }
    else
    {
        return false;
    }

    for (int i = 1; i < name.length(); i++)
    {
        if (!validate(name[i]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string name = "var_1__Int";
    cout << solution(name) << endl;
    return 0;
}