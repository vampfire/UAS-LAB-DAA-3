#include <vector>
#include <iostream>
using namespace std;

void search(int array[], int n)

{

vector <int> vect;

    for (int i = 0; i < n; i++)

    {

      int count = 0;

      for (int j = i + 1; j < n; j++)

      {

        if (array[i] > array[j])

        count = count + 1;

      }

        vect.push_back(count);

      }

      cout << "Linear Search: \n";

      for (int i = 0; i < vect.size(); i++)
      cout<< vect[i]<<" ";

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

   search(arr, n);

}
