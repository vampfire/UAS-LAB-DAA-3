#include <math.h>
#include <iostream>
#include <chrono>
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
         z += 1;     }

   jump[i] = z;
   
    }

     cout << "Output: \n";

     for(int i = n; i > 0; i--) 
     cout << jump[i] << " ";

}

int main() 

{

   auto start = chrono::steady_clock::now();

   cout << "\n";

   cout << "Small Count with Jump Search\n";

   cout << "\n";

   int arr[] = {9, 8, 8, 7, 6, 3, 2, 1, 1};

   int n = sizeof(arr)/sizeof(arr[0]), temp=0;
 
    int i = 0;
    int j = n-1;
    
    while(i < j){

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
 
        i++;  
        j--;

    }

    int array[n];

    cout << "Input: \n";

    for (int i = 0; i < n; i++) {

    cout << arr[(n-i)-1] << " ";
    
    array[i+1] = arr[i];

    }

   cout << "\n";
   cout << "\n";

   jump_search(array, n);

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


