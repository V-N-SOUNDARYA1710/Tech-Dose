int uniqueLetterString(char * s){
    int64_t total = 0;
    int prev[128] = {0}, prevprev[128] = {0};
    for (int i = 0, j = 0; *s; ++s) {
        total += j += ++i + prevprev[*s] - 2 * prev[*s];
        prevprev[*s] = prev[*s];
        prev[*s] = i;
    }
    return total % 1000000007LL;
}
