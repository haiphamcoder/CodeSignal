#include <iostream>

using namespace std;

bool solution(char symbol)
{
    return (symbol >= '0' && symbol <= '9');
}

int main()
{
    char symbol;
    cin >> symbol;
    cout << solution(symbol);
    return 0;
}