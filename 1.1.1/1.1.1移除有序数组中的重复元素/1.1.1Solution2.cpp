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
	cout << "ȥ�غ�����鳤��Ϊ��" << ref << endl;
	cout << "ȥ�غ������Ϊ��" << endl;
	for (size_t i = 0; i < ref; i++)
	{
		cout << A[i] << ",";
	}
	cout << endl;
	system("pause");
}
