class Solution {
public:
	string removeKdigits(string num, int k) {
		int n = num.length();
		int cnt = 0;
		set<int>chal;
		string ans;
		for (int i = 0; i < n; i++) {
			for (int j = i - 1; j >= 0; j--) {
				if (chal.find(j) == chal.end())
				{
					if (num[j] > num[i]) {
						cnt++;
						chal.insert(j);
						if (cnt == k)break;

					}
					else {
						break;
					}
				}

			}
			if (cnt == k)break;
		}

		for (int i = 0; i < n; i++) {
			if (chal.find(i) == chal.end()) {
				ans += num[i];

			}
			else k--;
		}
		ans = ans.substr(0, ans.length() - k);


		for (int i = 0; i < ans.length(); i++) {
			if (ans[i] != '0')if (ans.substr(i).length() != 0)return ans.substr(i); else return "0";
		}
		return "0";

	}
};
