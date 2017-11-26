template<typename T = int> gray_code(T n) {
  return n ^ (n >> 1);
}
