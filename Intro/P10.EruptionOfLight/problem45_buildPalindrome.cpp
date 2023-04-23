#include <iostream>
#include <algorithm>

using namespace std;

string solution(string st)
{
    string rev = st;
    reverse(rev.begin(), rev.end());
    int i = 0;
    while (rev != st)
    {
        st.insert(st.end() - i, st[i]);
        i++;
        rev = st;
        reverse(rev.begin(), rev.end());
    }
    return st;
}

int main()
{
    string st = "abcdc";
    cout << solution(st) << endl;
    return 0;
}