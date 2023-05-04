#include <iostream>

using namespace std;

bool solution(int experience, int threshold, int reward)
{
    return experience + reward >= threshold;
}

int main()
{
    cout << solution(10, 15, 5) << endl; // true
    return 0;
}