


long long mod = 1e9+7;
long long binaryExponentiation(long long base, long long power){
    long long carry = 1%mod;
    long long x = base%mod;
    while(power){
        if(power&1) carry = (__int128_t) (carry*x)%mod;
        x = (__int128_t) (x*x)%mod;
        power = power>>1;
    }
    return carry%mod;
}
