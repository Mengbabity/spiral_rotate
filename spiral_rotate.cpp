class Solution {
public:
	vector<int> spiralOrder(vector<vector<int>> matrix) {
		int m = matrix.size();
        
        if(m==0)
            return {};
        
		int n = matrix[0].size();
		int i = 0, j = 0;
		int flag = 1;
		vector<int> res;

		while (m>0 && n>0)
		{
			int row = n;
			for (int k = 0; k < row; k++)
			{
				res.push_back(matrix[i][j]);
				j += flag;
			}

			j -= flag;
			i += flag;
			
			m--;
			int column = m;

			for (int p = 0; p < column; p++)
			{
				res.push_back(matrix[i][j]);
				i += flag;
			}

			i -= flag;
			flag *= -1;
			j += flag;

			n--;
		}

		return res;
	}
};
