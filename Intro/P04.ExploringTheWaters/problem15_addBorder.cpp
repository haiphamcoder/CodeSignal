#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> solution(vector<string> picture)
{
    for (int i = 0; i < picture.size(); i++)
    {
        picture[i] = "*" + picture[i] + "*";
    }
    int len = picture[0].length();
    picture.insert(picture.begin(), string(len, '*'));
    picture.insert(picture.end(), string(len, '*'));
    return picture;
}

int main()
{
    vector<string> picture = {"abc", "ded"};
    vector<string> result = solution(picture);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}