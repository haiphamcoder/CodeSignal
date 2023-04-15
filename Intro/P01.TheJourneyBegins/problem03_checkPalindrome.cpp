#include <iostream>
#include <algorithm>

using namespace std;

bool solution(string inputString)
{
    string str = inputString;
    reverse(str.begin(), str.end());
    return str == inputString;
}

int main()
{
    string a = "aabaa";
    string b = "bbaba";
    cout << solution(a) << endl;
    cout << solution(b) << endl;
    return 0;
}