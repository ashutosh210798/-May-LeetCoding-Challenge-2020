class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        map<int,set<int> > m;
        for(int i=0;i<trust.size();i++){
            m[trust[i][0]].insert(trust[i][1]);
        }
        
        for(int i=1;i<=N;i++){
            if(m[i].size()==0){
                bool sabme=true;
                for(int j=1;j<=N;j++){
                    if(i==j)continue;
                    if(m[j].find(i)==m[j].end()){
                        sabme=false;
                        break;
                    }
               
                }
                if(sabme)return i;
            }
        }
        return -1;
        
    }
};
