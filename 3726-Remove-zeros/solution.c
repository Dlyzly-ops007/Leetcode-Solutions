long long removeZeros(long long n) {
    long long res = 0;
    long long place = 1;
    while (n > 0) {
        int d = n % 10;
        if (d != 0) {
            res += d * place;
            place *= 10;
        }
        n /= 10;
    }
    return res;
}