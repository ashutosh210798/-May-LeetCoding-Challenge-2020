class Solution {
public:
    int findComplement(int num) {
        int finala=0;
        int i=0;
     while(num!=0){
         int rem=num%2;
        // cout<<rem<<endl;
         finala+=(1-rem)*pow(2,i);
         //cout<<finala<<endl;
         i++;
         num/=2;
     }
        return finala;
    }
};
