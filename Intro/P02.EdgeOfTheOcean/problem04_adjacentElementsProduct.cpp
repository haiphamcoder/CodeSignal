#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> inputArray)
{
    int largestProduct = INT32_MIN;
    for (int i = 1; i < inputArray.size(); i++)
    {
        largestProduct = max(largestProduct, inputArray[i] * inputArray[i - 1]);
    }
    return largestProduct;
}

int main()
{
    vector<int> a = {3, 6, -2, -5, 7, 3};
    cout << solution(a) << endl;
    return 0;
}