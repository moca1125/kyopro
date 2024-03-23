#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    set<int> included;
    for (int i = 0; i < N; ++i)
    {
        int num;
        cin >> num;
        included.insert(num);
    }

    long long sum = 0;
    for (int i = 1; i <= K; ++i)
    {
        if (included.find(i) == included.end())
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
