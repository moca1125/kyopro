// 2024/01/29
// 関数

// void型でもreturn いる
#include <bits/stdc++.h>
using namespace std;

// 返り値が無いのでvoidを指定
void hello(string text)
{
    cout << "Hello, " << text << endl;
    return;
}

int main()
{
    hello("Tom");
    hello("C++");
}
