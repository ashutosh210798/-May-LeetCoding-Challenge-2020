class Solution {
	const double e = 1e-9;
public:
	bool checkStraightLine(vector<vector<int>>& coordinates) {
		bool pos = true;

		double div = (double)(coordinates[1][1] - coordinates[0][1]) / (double)(coordinates[1][0] - coordinates[0][0]);
		for (int i = 1; i < coordinates.size(); i++) {
			cout << (double)(coordinates[i][1] - coordinates[i - 1][1]) / (double)(coordinates[i][0] - coordinates[i - 1][0]) << endl;
			if (!(abs((double)(coordinates[i][1] - coordinates[i - 1][1]) / (double)(coordinates[i][0] - coordinates[i - 1][0]) - div) <e)) {
				pos = false;
				break;

			}

		}
		return pos;
	}
};
