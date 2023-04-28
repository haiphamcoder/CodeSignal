#include <iostream>

using namespace std;

bool solution(string time)
{
    int len = time.length();
    if (len != 5)
    {
        return false;
    }
    if (time[2] != ':')
    {
        return false;
    }
    int hour = (time[0] - '0') * 10 + (time[1] - '0');
    int minute = (time[3] - '0') * 10 + (time[4] - '0');
    if (hour < 0 || hour > 23)
    {
        return false;
    }
    if (minute < 0 || minute > 59)
    {
        return false;
    }
    return true;
}

int main()
{
    cout << solution("13:58") << endl;
    return 0;
}