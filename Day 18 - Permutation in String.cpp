class Solution {
public:
    int arr[26][20110];
    bool checkInclusion(string p, string s) {
        	if (p.length() > s.length()) {
			return false;
		}
		map<char, int>m;
		for (int i = 0; i < p.length(); i++)m[p[i]]++;
		for (int i = 0; i < s.length(); i++) {
			arr[s[i] - 'a'][i]++;
		}

		for (int i = 0; i < 26; i++) {
			for (int j = 1; j < 20110; j++) {
				arr[i][j] += arr[i][j - 1];
			}
		}
		vector<int>ans;

		for (int i = 0; i < s.length() - p.length() + 1; i++) {
			bool ok = true;
			for (int j = 0; j < 26; j++) {
				if (!i) {
					if (arr[j][p.length() - 1] != m[j + 'a']) {
						ok = false;
						break;
					}
				}
				else {
					if (arr[j][i + p.length() - 1] - arr[j][i - 1] != m[j + 'a']) {
						ok = false;
						break;
					}
				}
			}
			if (ok) {
				ans.push_back(i);
			}

		}
		return (ans.size()>=1);
    }
};
