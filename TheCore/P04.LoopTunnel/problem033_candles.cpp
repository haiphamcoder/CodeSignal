#include <iostream>

using namespace std;

int solution(int candlesNumber, int makeNew)
{
    int result = candlesNumber;
    int leftOver = candlesNumber;
    int newCandles = 0;
    while (leftOver >= makeNew)
    {
        newCandles = leftOver / makeNew;
        result += newCandles;
        leftOver = (leftOver % makeNew) + newCandles;
    }
    return result;
}

int main(){
    cout << solution(5, 2) << endl; // 9
    return 0;
}