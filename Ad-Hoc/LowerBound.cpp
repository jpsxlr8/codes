// lower bound return interator to first element which is ≥ value. If not, return end().

int lower_bound(vector<int> &arr, int value)
  {
    int l = 0, r = arr.size();

    while (l < r)
    {
      int mid = unsigned(l + r) >> 1;

      if (arr[mid] < value)
        l = mid + 1;
      else
        r = mid;
    }
    return l;
  }

