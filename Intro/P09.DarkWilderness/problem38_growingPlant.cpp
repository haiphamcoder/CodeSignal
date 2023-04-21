#include <iostream>
#include <cmath>

using namespace std;

int solution(int upSpeed, int downSpeed, int desiredHeight)
{
    if (upSpeed >= desiredHeight)
    {
        return 1;
    }
    return ceil((desiredHeight - downSpeed) * 1.0 / (upSpeed - downSpeed));
}

int main()
{
    cout << solution(100, 10, 910) << endl;
    return 0;
}