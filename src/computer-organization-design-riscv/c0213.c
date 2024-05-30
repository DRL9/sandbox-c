void swap(long long int v[], int k) {
  long long int tmp = v[k];
  v[k] = v[k + 1];
  v[k + 1] = tmp;
}