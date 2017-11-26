std::vector<int> primes_up_to(int n) {
  std::vector<int> least_prime(n + 1, 0);
  std::vector<int> primes;
  for (int i = 2; i <= n; i++) {
    if (least_prime[i] == 0) {
      least_prime[i] = i;
      primes.push_back(i);
    }
    for (int j = 0; j < (int)primes.size() && primes[j] <= least_prime[i] && i * primes[j] <= n; j++) {
      least_prime[i * primes[j]] = primes[j];
    }
  }
}
