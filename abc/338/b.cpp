#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  char ans;
  int i, j, comp, num, num2;
  cin >> s;

  std::sort(s.begin(), s.end());
  comp = 0, num = 0, ans = s[0], num2 = 0;
  for (i = 0; i < s.size() - 1; i++)
  {
    if (s[i + 1] == s[i])
    {
      num++;
    }
    else
    {
      for (j = i + 1; s[j] == s[j + 1]; j++)
      {
        num2++;
      }
      if (num < num2)
      {
        if (comp < num2)
        {
          comp = num2;
          ans = s[i + 1];
        }
      }
      else if (num2 < num)
      {
        if (comp < num2)
        {
          comp = num2;
          ans = s[i];
        }
      }
      num = 0;
      num2 = 0;
    }
  }
  cout << ans << endl;
}