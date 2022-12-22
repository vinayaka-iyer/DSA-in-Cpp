#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;

  while (start <= end)
  {
    if (arr[mid] == key)
    {
      return mid;
    }

    // go to right
    if (key > arr[mid])
    {
      start = mid + 1;
    }

    // go to left
    else
    {
      end = mid - 1;
    }

    mid = start + (end - start) / 2;
  }
  return -1;
}

int main()
{
  int even[] = {2, 4, 6, 8, 12, 18};
  int odd[] = {3, 8, 11, 14, 16};

  int key = 6;
  int index = binarySearch(even, 5, key);

  cout << "index of " << key << " is : " << index << endl;
  return 0;
}