template<typename T = int> gcd_coefficients(T a, T b, T& x, T& y) {
  if (a == 0) {
    x = 0;
    y = 1;
    return b;
  }
  T xt, yt;
  T d = gcd_coefficients(b % a, a, xt, yt);
  x = yt - (b / a) * xt;
  y = xt;
  return d;
}
