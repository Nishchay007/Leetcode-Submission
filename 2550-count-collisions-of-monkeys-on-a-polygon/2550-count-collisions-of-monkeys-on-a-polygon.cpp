class Solution {
public:
    int mod=1e9+7;
    long long pow_temp(long long n){
        if(n == 1) return 2;
        long long t = pow_temp(n/2);
        if(n%2 == 0) return (t*t) % mod;
       
        return (2 * (t*t)%mod)%mod;
    }
    int monkeyMove(int n) {
        return pow_temp(n)-2<0?pow_temp(n)-2+mod:pow_temp(n)-2;
    }
};