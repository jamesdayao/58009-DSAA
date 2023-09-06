#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
	{
	int x = arr[i];
	int y = i - 1;
	while (y >= 0 && arr[y] > x) 
		{
            arr[y + 1] = arr[y];
            y--;
        }

        arr[y + 1] = x;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) 
	{
		cout << arr[i] << " ";
    }
    cout <<"\n";
}

int main() 
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
