// upper_bound() returns an iterator pointing to the first element in the range [first, last) that is greater than the value
int upper_bound(vector<int> &arr, int value)
  {
    int l = 0, r = arr.size();

    while (l < r)
    {
      int mid = unsigned(l + r) >> 1;

      if (arr[mid] <= value)
        l = mid + 1;
      else
        r = mid;
    }
    return l;
  }
