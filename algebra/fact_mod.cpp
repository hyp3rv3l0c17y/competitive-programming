int fact_mod(long long n, int mod) {
  int res = 1;
  while (n > 1) {
    res = (1ll * res * (((n / mod) & 1) ? mod - 1 : 1)) % mod;
    for (int i = 2; i <= n % mod; i++) {
      res = (1ll * res * i) % mod;
    }
    n /= mod;
  }
  return res;
}
