#include <iostream>

using namespace std;

bool solution(string bishop, string pawn)
{
    return abs(bishop[0] - pawn[0]) == abs(bishop[1] - pawn[1]);
}

int main()
{
    cout << boolalpha << solution("a1", "c3") << endl;
    cout << boolalpha << solution("h1", "h3") << endl;
    return 0;
}
