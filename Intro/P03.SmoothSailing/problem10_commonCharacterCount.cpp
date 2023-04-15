#include <iostream>
#include <string>
using namespace std;

int solution(string s1, string s2)
{
    int t1[26] = {0};
    int t2[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        t1[s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        t2[s2[i] - 'a']++;
    }
    int sum = 0;
    for (int i = 0; i < 26; i++)
    {
        sum += min(t1[i], t2[i]);
    }
    return sum;
}

int main()
{
    string s1 = "aabcc";
    string s2 = "adcaa";
    cout << solution(s1, s2) << endl;
    return 0;
}
