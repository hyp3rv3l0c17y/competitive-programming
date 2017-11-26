long long fast_exponentation_mod(long long a, long long n, long long mod) {
  long long result = 1;
  while (n) {
    if (n & 1) {
      result = (a * result) % mod;
    }
    a = (a * a) % mod;
    n >>= 1;
  }
  return result;
}
