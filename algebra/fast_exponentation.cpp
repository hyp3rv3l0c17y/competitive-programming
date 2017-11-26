template<typename T = int> fast_exponentation(T a, long long n) {
  T result = 1;
  while (n) {
    if (n & 1) {
      result *= a;
    }
    a *= a;
    n >>= 1;
  }
  return result;
}
