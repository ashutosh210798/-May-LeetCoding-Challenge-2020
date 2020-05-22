
class Solution {
public:
 map<char,int>m;
    string frequencySort(string s) {
           
        for(auto i:s){
            m[i]++;
        }
       vector<pair<int,char>>p;
        for(auto i:m){
            p.push_back({i.second,i.first});
        }
        sort(p.begin(),p.end());reverse(p.begin(),p.end());
        
        
        string ans;
        for(auto i:p){
            for(int j=0;j<i.first;j++){
                ans+=i.second;
            }
        }
        return ans;
    }
};
