#include <iostream>

using namespace std;

int solution(int n)
{
    string s = to_string(n);
    int max = 0;
    for (int i = 0; i < s.length(); i++)
    {
        string temp = s;
        temp.erase(i, 1);
        int num = stoi(temp);
        if (num > max)
        {
            max = num;
        }
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    cout << solution(n) << endl;
    return 0;
}