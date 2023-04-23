#include <iostream>

using namespace std;

string solution(string address)
{
    return address.substr(address.find_last_of('@') + 1);
}

int main()
{
    cout << solution("email@example.com") << endl;
    return 0;
}