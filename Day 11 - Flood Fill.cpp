class Solution {
public:
	bool vis[1000][1000];
	void bfs(int row, int col, int color, vector<vector<int>>& image, vector<vector<int>>& newimage, int parentr, int parentc) {
		int sizer = image.size();
		int sizec = image[0].size();

		if (row >= 0 && row < sizer && col >= 0 && col < sizec && !vis[row][col])
		{
			vis[row][col] = true;

			if (image[parentr][parentc] == image[row][col]) {
				newimage[row][col] = color;
				bfs(row - 1, col, color, image, newimage, row, col);
				bfs(row + 1, col, color, image, newimage, row, col);
				bfs(row, col + 1, color, image, newimage, row, col);
				bfs(row, col - 1, color, image, newimage, row, col);
			}

		}
		else return;



	}
	vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
		vector<vector<int>> newimage = image;
		newimage[sr][sc] = newColor;
		vis[sr][sc] = true;
		bfs(sr + 1, sc, newColor, image, newimage, sr, sc);
		bfs(sr - 1, sc, newColor, image, newimage, sr, sc);
		bfs(sr, sc + 1, newColor, image, newimage, sr, sc);
		bfs(sr, sc - 1, newColor, image, newimage, sr, sc);
		return newimage;
	}
};
