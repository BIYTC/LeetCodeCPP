using namespace std;
#include <stdio.h>;
#include<vector>;
#include<iostream>;
#include<algorithm>;

class Solution
{
public:
	int removeDuplicates(vector<int>& nums) {
		return distance(nums.begin(), unique(nums.begin(),nums.end()));
	}
};

int main() {
	Solution S;
	int a[] = { 1,1,2,3,3,4,5,5 };
	vector<int> A(a, a + sizeof(a) / sizeof(int));
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
