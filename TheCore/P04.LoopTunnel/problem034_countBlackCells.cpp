#include <iostream>

using namespace std;

int solution(int n, int m)
{
    int j = 1; // j là vị trí bắt đầu của cột cần kiểm tra trong hàng
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp = 0; // temp dùng để đếm số ô đen trong hàng
        bool flag = false; // flag dùng để kiểm tra xem đã gặp ô đen chưa
        for (; j <= m; j++)
        {
            double t = ((m * 1.0 / n) * (i - 1) - j) * ((m * 1.0 / n) * i - (j - 1));
            if (t <= 0) // Nếu là ô đen
            {
                flag = true;
                temp++;
            }
            else // Nếu là ô trắng
            {
                if (flag) // Nếu đã gặp ô đen rồi
                {
                    break;
                }
            }
        }
        result += temp;
        j = j - temp; // cập nhật lại vị trí bắt đầu của cột cần kiểm tra trong hàng
                      // Do vị trí bắt đầu xuất hiện của ô đen trong các hàng liền sau
                      // không bao giờ nhỏ hơn vị trí bắt đầu xuất hiện của ô đen trong hàng trước đó
    }
    return result;
}

int main()
{
    cout << solution(3, 4) << endl;
    return 0;
}