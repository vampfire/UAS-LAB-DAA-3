#include <vector>
#include <iostream>
using namespace std;

void binary_search(vector<int> &v, int arr, int* res, int i) {

  int min = 0;
  int max = v.size() - 1;
  while (min <= max) {

      int mid = (min + max) / 2;

      int M = v[mid];

      if (M >= arr)
          max = mid - 1;
      else
          min = mid + 1;

  }

  v.insert(v.begin() + min, arr);

  res[i] = min;
}


void insert(int *arr, int n) {


    int res[n];

    vector<int> v;
    for (int i = n - 1; i >= 0; i--)
    binary_search(v, arr[i], res, i);

    cout << "Binary Search: \n";

    for (int i=0; i<n; i++)
      cout<<res[i]<<" ";

}

int main()

{

   int n;
   cout << "Enter number of array: ";
   cin >> n;
   cout << "\n";
   int arr[n];
   cout << "Enter items: ";

   cout << "\n";

   for(int i = 0; i < n; i++)
   cin >> arr[i];

   cout << "\n";

   insert(arr, n);

}
