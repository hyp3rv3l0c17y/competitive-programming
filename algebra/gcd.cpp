template<typename T = int> T gcd(T a, T b) {
  while (b) {
    a %= b;
    std::swap(a, b);
  }
  return a;
}
