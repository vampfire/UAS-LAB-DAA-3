#include <math.h>
#include <iostream>
using namespace std;

int jump_search(int a[], int n) {

    int jump[n];

    for (int i = 1; i <= n; i++)

    { int arr = a[i];

   int x = 0;
   int m = sqrt(n);
   int z = 0;

   while (a[m] < arr && m < n) {

      x = m;
      m += sqrt(n);
      z += sqrt(n);

         if(m > n - 1)

      jump[i] = z;

   }

     for(int y = x; y<m; y++) {
      if(a[y+1] < arr)
         z += 1;
   }

   jump[i] = z;

    }

     cout << "Jump Search: \n";

     for(int i = n; i > 0; i--)
      cout << jump[i] << " ";

}

int main()

{

   int n;
   cout << "Enter number of array: ";
   cin >> n;
   int arr[n];
   cout << "\n";
   cout << "Enter items: ";

   cout << "\n";

   for(int i = n; i > 0; i--)
   cin >> arr[i];

   cout << "\n";

   jump_search(arr, n);

}
