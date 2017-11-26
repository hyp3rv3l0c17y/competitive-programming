map<long long, long long> fibonacci_cache;
long long fibonacci(long long n, long long mod) {
  if (fibonacci_cache.count(n)) {
    return fibonacci_cache[n];
  }
  long long half = n >> 1;
  if (n & 1) {
    return fibonacci_cache[n] = (fibonacci(half) * fibonacci(half + 1) + fibonacci(half - 1) * fibonacci(half)) % mod;
  } else {
    return fibonacci_cache[n] = (fibonacci(half) * fibonacci(half) + fibonacci(half - 1) * fibonacci(half - 1)) % mod;
  }
}
