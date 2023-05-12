#include <iostream>

using namespace std;

bool solution(int score1, int score2)
{
    int maxScore = max(score1, score2);
    int minScore = min(score1, score2);
    return (maxScore == 6 && minScore < 5) || (maxScore == 7 && minScore >= 5 && minScore <= 6);
}

int main()
{
    cout << boolalpha << solution(3, 6) << endl;
    return 0;
}
