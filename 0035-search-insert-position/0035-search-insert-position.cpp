class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int n=nums.size();
    int s = 0;     // start
    int e = n - 1; // end
    int ans = 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (nums[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else if (nums[mid] > target)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return s;
    }
};