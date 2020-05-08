// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(isBadVersion(1)){
            return 1;
        }
        long long n1=n;
        long long low=1;
        long long high=n1+1;
        while(low<=high){
            long long mid=(low+high)/2;
           // cout<<mid<<endl;
            if(!isBadVersion(mid) && isBadVersion(mid+1)){
                return mid+1;
            }
            else if(isBadVersion(mid)){
                high=mid;
            }
            else low=mid+1;
        }
        return -1;
    }
};
