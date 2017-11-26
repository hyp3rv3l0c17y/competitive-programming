std::vector<int> primes_up_to(int n) {
  std::vector<char> prime(n + 1, 1);
  prime[0] = prime[1] = false;
  std::vector<int> primes;
  for (int i = 2; i <= n; i++) {
    if (prime[i]) {
      primes.push_back(i);
      if (1ll * i * i <= n) {
        for (int j = i * i; j <= n; j += i) {
          prime[j] = false;
        }
      }
    }
  }
  return primes;
}
