#include <iostream>
using namespace std;

int solution(int year)
{
    // Do thế kỷ 1 bắt đầu từ năm 1 -> 100
    // Thế kỷ 2 bắt đầu từ năm 101 -> 200
    // ...
    // Mỗi thế kỷ là 100 năm
    // Ta dịch năm đó thêm 99 năm, sau đó chia phần nguyên cho 100
    return (year + 99) / 100;
}

int main()
{
    int year = 2002;
    cout << "The year " << year << " belongs to the " << solution(year) << " century" << endl;
    return 0;
}