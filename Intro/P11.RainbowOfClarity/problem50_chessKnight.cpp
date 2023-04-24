#include <iostream>

using namespace std;

int solution(string cell)
{
    int result[8][8] = {{2, 3, 4, 4, 4, 4, 3, 2},
                        {3, 4, 6, 6, 6, 6, 4, 3},
                        {4, 6, 8, 8, 8, 8, 6, 4},
                        {4, 6, 8, 8, 8, 8, 6, 4},
                        {4, 6, 8, 8, 8, 8, 6, 4},
                        {4, 6, 8, 8, 8, 8, 6, 4},
                        {3, 4, 6, 6, 6, 6, 4, 3},
                        {2, 3, 4, 4, 4, 4, 3, 2}};

    return result[cell[0] - 'a'][cell[1] - '0' - 1];
}

int main()
{
    cout << solution("a1") << endl;
    return 0;
}