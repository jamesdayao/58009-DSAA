#include <iostream>
# define x 50

using namespace std;

void displayArr(int arr[], int a)
{
   for( int i = 0; i < a; i++ )
   {
      cout << arr[ i ] << ", ";
   }
   cout << endl;
}
void insertAtEnd( int arr[], int &a, int b )
{
   if( a < x ) 
   {
      arr[ a ] = b;
   }
   a += 1;
}

int main() 
{
   int arr[ x ] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int a = 10;
   
   cout << "Array before insertion: ";
   displayArr( arr, a);
   
   cout << "Inserting 11 at the end:" << "\n";
   insertAtEnd( arr, a, 11);
   
   cout << "Array after insertion: "<< "\n";
   displayArr( arr, a);
   
return 0;
}
