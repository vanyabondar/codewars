int find_even_index(const int *a, int l) {
  int i, sum = 0, sum2 = 0;
  for (i = 1; i < l; i++)
    sum += a[i];
  if (sum == 0)
    return 0;
  for (i = 1; i < l; i++){
    sum -= a[i];
    sum2 += a[i - 1];
    if (sum == sum2)
      return i;
  }
      
  return -1;
}
