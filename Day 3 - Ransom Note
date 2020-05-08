class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>m,m1;
        for(int i=0;i<magazine.length();i++){
            m[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            m1[ransomNote[i]]++;
        }
        for(auto i:m1){
            if(i.second>m[i.first]){
                return false;
            }
        }
        return true;
    }
};
