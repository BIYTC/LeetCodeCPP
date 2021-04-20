using namespace std;
#include <stdio.h>;
#include<vector>;
#include<iostream>;

class Solution
{
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.empty())
		{
			return 0;
		}
		int index = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[index] != nums[i])
			{
				nums[++index] = nums[i];
			}
		}
		return index + 1;
	}
};

int main() {
	Solution S;
	int a[] = { 1,1,2,3,3,4,5,5 };
	vector<int> A(a, a + 8);
	int ref = S.removeDuplicates(A);
	cout << "去重后的数组长度为：" << ref << endl;
	cout << "去重后的数组为：" << endl;
	for (size_t i = 0; i < ref; i++)
	{
		cout << A[i] << ",";
	}
	cout << endl;
	system("pause");
}
