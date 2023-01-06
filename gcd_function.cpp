long long GreatestCommonDivisor(long long a, long long b) {
  long long tmp;
  while (b != 0) {
    tmp = a % b;
    a = b;
    b = tmp;
  }
  return a;
}