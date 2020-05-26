class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)nums[i]=-1;
        }
        map<int,int> m;
        m[0]=0;
        int ans=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
           
            if(m.find(sum)!=m.end()){
                ans=max(ans, i-m[sum]);
            }
            else{
                         m[sum]=i;
            }
             sum+=nums[i];
    
        }
        if(m.find(sum)!=m.end()){
                ans=max(ans, (int)nums.size()-m[sum]);
            }
        return ans;
    }
};
