using namespace std;
#include <stdio.h>;
#include<vector>;
#include<iostream>;
#include<algorithm>;

/// <summary>
/// ����0,1,2,2,3,3,3,4,5 -> 4,5,0,1,2,2,3,3,3,3
///���ҵ�����Ŀ��ֵ�����Ҳ�������-1
///�ö��ֲ��ҷ�
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
				if (nums[first] <= target && target < nums[mid])//�������������
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
				if (target > nums[mid] && target <= nums[last - 1])//�������������
				{
					first = mid + 1;
				}
				else
				{
					last = mid;
				}
			}
			else//�����ظ���Ԫ��
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
	cout << "target_1������Ϊ��" << S.search(A, target_1) << endl;
	cout << "target_2������Ϊ��" << S.search(A, target_2) << endl;
	system("pause");
}