using namespace std;
#include <stdio.h>;
#include<vector>;
#include<iostream>;
#include<algorithm>;
class Solution
{
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size()<=2)
		{
			return nums.size();
		}
		int index = 2;
		for (int i = 2;	 i < nums.size(); i++)
		{
			if (nums[i] != nums[index - 2])
			{
				nums[index++] = nums[i];
			}
		}
		return index;
	}
};

int main() {
	Solution S;
	int a[] = { 1,2,2,3,3,3,4,4,4,4,5,5 };
	vector<int> A(a, a + sizeof(a)/sizeof(int));
	int ref = S.removeDuplicates(A);
	cout << "ȥ�غ�����鳤��Ϊ��" << ref << endl;
	cout << "ȥ�غ������Ϊ��" << endl;
	for (size_t i = 0; i < ref; i++)
	{
		cout << A[i] << ",";
	}
	cout << endl;
	system("pause");
}