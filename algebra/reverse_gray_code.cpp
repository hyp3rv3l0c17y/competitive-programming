template<typename T = int> reverse_gray_code(T code) {
  T n = 0;
  for (; code; code >>= 1) {
    n ^= code;
  }
  return n;
}
