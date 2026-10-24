int romanToInt(char* s) {
    int r = 0, p = 0, c = 0;
    while (*s) {
        switch (*s) {
            case 'I': c = 1; break;
            case 'V': c = 5; break;
            case 'X': c = 10; break;
            case 'L': c = 50; break;
            case 'C': c = 100; break;
            case 'D': c = 500; break;
            case 'M': c = 1000; break;
        }
        r += c;
        if (p < c) r -= 2 * p;
        p = c;
        s++;
    }
    return r;
}