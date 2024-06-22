#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> intervals)
{
    if (intervals.empty())
        return {};

    // 入力の間隔を開始点でソート
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;
    ans.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++)
    {
        if (ans.back()[1] >= intervals[i][0])
        {
            // 重複または連続する区間をマージ
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
        else
        {
            ans.push_back(intervals[i]);
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {0, 3}, {4, 5}};
    vector<vector<int>> result = solution(intervals);

    for (const auto &interval : result)
    {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
