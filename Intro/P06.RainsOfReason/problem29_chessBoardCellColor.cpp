#include <iostream>

using namespace std;

bool solution(string cell1, string cell2)
{
    return (cell1[0] + cell1[1] + cell2[0] + cell2[1]) % 2 == 0;
}

int main()
{
    cout << solution("A1", "C3") << endl;
    return 0;
}