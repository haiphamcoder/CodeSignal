#include <iostream>

using namespace std;

int solution(int nCols, int nRows, int col, int row)
{
    return (nCols - col + 1) * (nRows - row);
}

int main()
{
    cout << "16: " << solution(16, 11, 5, 3) << endl;
    return 0;
}