//看题解的
//原题 https://leetcode-cn.com/problems/ugly-number/submissions/

class Solution {
public:
    bool isUgly(int n) {
        if(n < 1) return false;
        vector<int> v = {2,3,5};
        for(int i =0;i<3;i++){
            while(n % v[i] == 0) n/=v[i];
        }
        return n==1;
    }
};