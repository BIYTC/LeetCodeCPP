using namespace std;
#include <stdio.h>;
#include<vector>;
#include<iostream>;
#include<algorithm>;
/// <summary>
/// 时间复杂度为O(log(m+n))
/// 递归实现
/// 查找两个排序数组中第K大的元素
/// </summary>
class Solution
{
public:
	double findMedianSortedArrays(const vector<int>& A, const vector<int>& B) {
		const int m = A.size();
		const int n = B.size();
		int total = m + n;
		if (total & 0x1) //如果是总数是奇数
		{
			return find_kth(A.begin(), m, B.begin(), n, total / 2 + 1);
		}
		else
		{
			return (find_kth(A.begin(), m, B.begin(), n, total / 2) + find_kth(A.begin(),m,B.begin(),n,total /2 + 1))/2.0;
		}
	}
private:
	static int find_kth(std::vector<int>::const_iterator A, int m, std::vector<int>::const_iterator B, int n, int k) {
		//认为m小于等于n
		if (m > n)
		{
			return find_kth(B, n, A, m, k);
		}
		if (m == 0)
		{
			return *(B + k - 1);
		}
		if (k == 1)
		{
			return min(*A, *B);
		}

		//将k分为两部分
		int ia = min(k / 2, m), ib = k - ia;
		if (*(A + ia - 1) < *(B + ib -1))
		{
			return find_kth(A + ia, m - ia, B, n, k - ia);
		}
		else if(*(A + ia - 1) > *(B + ib - 1))
		{
			return find_kth(A, m, B + ib, n - ib, k - ib);
		}
		else
		{
			return A[ia - 1];
		}
	}
};

int main() {
	Solution S;
	int a[] = { 1,3,5,7,9 };
	int b[] = { 2,4,6,8 };
	vector<int> A(a, a + sizeof(a) / sizeof(int));
	vector<int> B(b, b + sizeof(b) / sizeof(int));
	int K = 5;
	cout << "第K大的元素为：" << S.findMedianSortedArrays(A, B) << endl;
	system("pause");
}