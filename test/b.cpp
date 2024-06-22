#include <iostream>
#include <vector>

std::vector<int> countSpecialSubarrays(const std::vector<int> &nums)
{
    int n = nums.size();
    std::vector<int> result(n, 0);

    for (int i = 0; i < n; ++i)
    {
        int count = 0;
        int max_val = nums[i];

        // 左から右へ部分配列をチェック
        for (int j = i; j < n; ++j)
        {
            if (nums[j] > max_val)
            {
                break;
            }
            if (nums[j] == max_val && (j == i || j == n - 1))
            {
                count++;
            }
        }

        // 右から左へ部分配列をチェック
        for (int j = i; j >= 0; --j)
        {
            if (nums[j] > max_val)
            {
                break;
            }
            if (nums[j] == max_val && (j == i || j == 0))
            {
                count++;
            }
        }

        result[i] = count;
    }

    return result;
}

int main()
{
    std::vector<int> nums = {1, 1, 1, 1, 1};
    std::vector<int> result = countSpecialSubarrays(nums);

    for (int count : result)
    {
        std::cout << count << " ";
    }
    std::cout << std::endl;

    return 0;
}
