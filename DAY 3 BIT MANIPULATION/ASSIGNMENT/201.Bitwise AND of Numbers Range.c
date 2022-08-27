int rangeBitwiseAnd(int m, int n) {
    if (m >= n) {
      return m;
    }

    int i = 0;
    while (m != n) {
      m /= 2;
      n /= 2;
      i ++;
    }

    return m << i;
}
