#include <vector>
#include <iostream> 
#include <chrono>
using namespace std; 

void search(int array[], int n)

{

vector <int> vect;

    cout << "Input: \n";

    for (int i = 0; i < n; i++)

    {

      cout<< array[i]<<" ";

      int count = 0;
      
      for (int j = i + 1; j < n; j++)

      {

        if (array[i] > array[j]) 

        count = count + 1;
       
      }
    
        vect.push_back(count);
        
      }

      cout << "\n";
      cout << "\n";

      cout << "Output: \n";

      for (int i = 0; i < vect.size(); i++)
      cout<< vect[i]<<" ";

      }

int main()

{

  auto start = chrono::steady_clock::now();

   cout << "\n";

   cout << "Small Count with Linear Search\n";

   int arr[] = {9, 8, 8, 7, 6, 3, 2, 1, 1};

   int n = sizeof(arr) / sizeof(arr[0]);

   cout << "\n";

   search(arr, n);

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