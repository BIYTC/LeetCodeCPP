using namespace std;
#include <stdio.h>;
#include<vector>;
#include<iostream>;
#include<algorithm>;

/// <summary>
/// 例：0,1,2,2,3,3,3,4,5 -> 4,5,0,1,2,2,3,3,3,3
///查找到返回目标值，查找不到返回-1
///用二分查找法
/// </summary>
class Solution
{
public:
	int search(const vector<int>& nums, int target) {
		int first = 0, last = nums.size();
		while (first != last)
		{
			const int mid = first + (last - first) / 2;
			if (nums[mid] == target)
			{
				return mid;
			}
			if (nums[first] < nums[mid])
			{
				if (nums[first] <= target && target < nums[mid])//绝对有序的区间
				{
					last = mid;
				}
				else
				{
					first = mid + 1;
				}
			}
			else if(nums[first] > nums[mid])
			{
				if (target > nums[mid] && target <= nums[last - 1])//绝对有序的区间
				{
					first = mid + 1;
				}
				else
				{
					last = mid;
				}
			}
			else//跳过重复的元素
			{
				first++;
			}
		}
		return -1;
	}
};

int main() {
	Solution S;
	int a[] = { 4,5,0,1,2,2,3,3,3,3 };
	vector<int> A(a, a + sizeof(a) / sizeof(int));
	int target_1 = 2;
	int target_2 = 6;
	cout << "target_1的坐标为：" << S.search(A, target_1) << endl;
	cout << "target_2的坐标为：" << S.search(A, target_2) << endl;
	system("pause");
}