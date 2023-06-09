// Rotation
// Given an ascending sorted rotated array Arr of distinct integers of size N.
// The array is right rotated K times. Find the value of K.

class Solution
{
public:
  int findKRotation(int arr[], int n)
  {
    // code here

    int lo = 0;
    int hi = n - 1;
    int ans = INT_MAX;
    int ind = 0;
    while (lo <= hi)
    {
      int mid = (lo + hi) / 2;
      // already sorted
      if (arr[lo] <= arr[hi])
      {
        if (arr[lo] < ans)
        {
          ind = lo;
          ans = arr[lo];
        }
      }

      // left half sorted
      if (arr[lo] <= arr[mid])
      {
        if (arr[lo] < ans)
        {
          ans = arr[lo];
          ind = lo;
        }
        lo = mid + 1;
      }
      // right half sorted
      else
      {
        if (arr[mid] < ans)
        {
          ans = arr[mid];
          ind = mid;
        }
        hi = mid - 1;
      }
    }
    return ind;
  }
};