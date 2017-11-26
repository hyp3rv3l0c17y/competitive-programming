template<typename T = int> phi(T n) {
  T result = n;
  for (T i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      while (n % i == 0) {
        n /= i;
      }
      result -= result / i;
    }
  }
  if (n > 1) {
    result -= result / n;
  }
  return result;
}
