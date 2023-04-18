#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> a)
{
    return a[(a.size() - 1) / 2];
}

int main()
{
    vector<int> a = {2, 4, 7};
    cout << solution(a) << endl;
    return 0;
}