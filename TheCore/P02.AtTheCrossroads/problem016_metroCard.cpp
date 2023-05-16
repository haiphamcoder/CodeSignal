#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int lastNumberOfDays)
{
    if (lastNumberOfDays == 28 || lastNumberOfDays == 30)
    {
        return {31};
    }
    return {28, 30, 31};
}

int main()
{
    int lastNumberOfDays;
    cout << "Enter the last number of days: ";
    cin >> lastNumberOfDays;
    cout << "The number of days in the next month: ";
    for (auto i : solution(lastNumberOfDays))
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}