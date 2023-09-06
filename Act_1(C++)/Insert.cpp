#include <iostream>
using namespace std;

int main()
{
	int arr[11], i, a, b;
	cout<<"Enter 10 Array Elements: ";
	
	for(i=0; i<10; i++)
		cin>>arr[i];
		
	cout<<"\nEnter Element to Insert: ";
	cin>>a;
	
	cout<<"\nAt What Position ? ";
    cin>>b;
    for(i=a; i>=b; i--)
        arr[i] = arr[i-1];
	arr[i] = a;
	a++;
	
	cout<<"\nThe new Array is: \n";
	
	for (i=0; i<11; i++)
		cout<<arr[i]<<" ";
	cout<<"\n";	
	return 0;
	
}
