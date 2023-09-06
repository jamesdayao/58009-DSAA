#include <iostream>
using namespace std;

void displayArr(int arr[], int a)
{
   for( int i = 0; i < a; i++ )
   {
      cout << arr[ i ] << ", ";
   }
   cout << endl;
}

int main()
{
  int arr[] = {5, 4, 3, 2, 1};
  int a = 5;
  int len = sizeof(arr)/sizeof(arr[0]);
  
	cout <<"Array: ";
	displayArr(arr, a);
	
cout << "The size of the array is: " << len;
return 0;
}
