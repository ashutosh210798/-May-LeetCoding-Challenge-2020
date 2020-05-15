class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int here=A[0];
        int tot=A[0];
         int herem=A[0];
        int totm=A[0];
        int sum=A[0];
        for(int i=1;i<A.size();i++){
            here=max(A[i],here+A[i]);
            tot=max(tot,here);
            sum+=A[i];
            herem=min(A[i],herem+A[i]);
            totm=min(totm,herem);
        }
        if(tot<0){
            return tot; 
        }
        else
        return max(tot,sum-totm);
    }
};
