class Solution {
public:
    int subtractProductAndSum(int n) {
         int product=1,sum=0;
        
       while(n!=0)
       {
           int rem=n%10;
           product=rem *1;
           sum =0+rem;
       }
        
        int answer=product--sum;
        return answer;
    }
};