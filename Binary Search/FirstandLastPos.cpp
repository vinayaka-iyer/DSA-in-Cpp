#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;

  while (s <= e)
  {
    // store ans and go left
    if (arr[mid] == key)
    {
      ans = mid;
      e = mid - 1;
    }
    // go to right
    else if (key > arr[mid])
    {
      s = mid + 1;
    }
    // go to left
    else if (key < arr[mid])
    {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

int lastOcc(int arr[], int n, int key)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;

  while (s <= e)
  {
    // store ans and go right
    if (arr[mid] == key)
    {
      ans = mid;
      s = mid + 1;
    }
    // go to right
    else if (key > arr[mid])
    {
      s = mid + 1;
    }
    // go to left
    else if (key < arr[mid])
    {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

int totalOcc(int arr[], int n, int key)
{
  return (lastOcc(arr, n, key) - firstOcc(arr, n, key)) + 1;
}

int main()
{
  int even[10] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 5};
  cout << "first occurance of 3 is at index: " << firstOcc(even, 10, 3) << endl;
  cout << "last occurance of 3 is at index: " << lastOcc(even, 10, 3) << endl;
  cout << "total number of occurances of 3 is: " << totalOcc(even, 10, 3);

  return 0;
}
