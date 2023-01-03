#include <vector>
#include <iostream>
#include <chrono>
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
    cout << "Input: \n";
    for (int i = n - 1; i >= 0; i--) {
    cout << arr[(n-i)-1] << " ";
    binary_search(v, arr[i], res, i); }

    cout << "\n";

    cout << "\n";

    cout << "Output: \n";

    for (int i=0; i<n; i++) 
      cout<<res[i]<<" ";

}

int main() 

{

   auto start = chrono::steady_clock::now();

   cout << "\n";

   cout << "Small Count with Binary Search\n";

   int arr[] = {9, 8, 8, 7, 6, 3, 2, 1, 1};

   int n = sizeof(arr) / sizeof(arr[0]);

   cout << "\n";

   insert(arr, n);

   cout << "\n";
   cout << "\n";

  cout << "Execution Time: \n";

  auto end = chrono::steady_clock::now();
	cout<<chrono::duration_cast<chrono::nanoseconds>(end-start).count()<<" Nanoseconds"<<endl;
	cout<<chrono::duration_cast<chrono::microseconds>(end-start).count()<< " Microseconds" << endl;
	cout<<chrono::duration_cast<chrono::milliseconds>(end-start).count()<<" Milliseconds"<<endl;
	cout<<chrono::duration_cast<chrono::seconds>(end-start).count()<< " Seconds";

  cout << "\n";
  cout << "\n";

} 
