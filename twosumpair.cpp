#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size(); ++i)
    {
        int complement = target - nums[i];

        if (seen.find(complement) != seen.end())
        {
            return {seen[complement], i};
        }

        seen[nums[i]] = i;
    }

    return {};
}

int main()
{

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty())
    {
        cout << "Indices of the two numbers: [" << result[0] << ", " << result[1] << "]" << endl;
    }
    else
    {
        cout << "No solution found." << endl;
    }

    return 0;
}
