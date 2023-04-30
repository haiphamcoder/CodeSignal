#include <iostream>

using namespace std;

string solution(string code)
{
    string result = "";
    for (int i = 0; i < code.length(); i += 8)
    {
        int num = stoi(code.substr(i, 8), nullptr, 2);
        result += (char)num;
    }
    return result;
}

int main()
{
    string code = "010010000110010101101100011011000110111100100001";
    cout << solution(code) << endl;
    return 0;
}