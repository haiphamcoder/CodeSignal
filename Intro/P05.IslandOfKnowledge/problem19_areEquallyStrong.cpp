#include <iostream>
using namespace std;

bool solution(int yourLeft, int yourRight, int friendsLeft, int friendsRight)
{
    return (yourLeft == friendsLeft && yourRight == friendsRight) || (yourLeft == friendsRight && yourRight == friendsLeft);
}

int main()
{
    int yourLeft = 10;
    int yourRight = 15;
    int friendsLeft = 15;
    int friendsRight = 10;
    cout << solution(yourLeft, yourRight, friendsLeft, friendsRight) << endl;
    return 0;
}