#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> generateMatrix(int n) {
		if (n == 0)
			return {};

		if (n == 1)
			return { { n } };

		int num = 1;

		vector<vector<int>> res(n, vector<int>(n));
		int i = 0, j = 0;
		int col = n - 1, row = n - 1;

		while (i <= col && j <= row)
		{
			for (int k = j; k<=row; k++)   //从左到右1-3
			{
				res[i][k] = num++;
			}
			i++;   //上界
			for (int k = i; k<=col; k++)   //从上到下4-5
			{
				res[k][row] = num++;
			}
			row--;   //右界
			for (int k = row; k >= j; k--)   //从右到左6-7
			{
				res[col][k] = num++;
			}
			col--;   //下界
			for (int k = col; k >= i; k--)   //从下到上8
			{
				res[k][j] = num++; 
			}
			j++;   //左界
		}

		return res;

	}
};



int main()
{
	Solution s;
	s.generateMatrix(3);
	return 0;
}
