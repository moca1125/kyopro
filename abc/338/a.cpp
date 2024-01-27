#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  int i, num1, num2;
  cin >> s;

  num1 = 0, num2 = 0;
  if (s[0] < 'a')
  {
    for (i = 1; s[i]; i++)
    {
      if ('a' <= s[i])
      {
      }
      else
      {
        num1++;
      }
    }
  }
  else
  {
    num2++;
  }

  if (num1 == 0 && num2 == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}