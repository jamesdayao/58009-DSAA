#include <iostream>
using namespace std;

int main()
{
	int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = 10;
	int i;
	int sum = 0;
	
	for (i = 0; i < n; i++)
	{
	cout<<"num["<< i <<"] = "<< num[i] <<endl;
	sum += num[i];
	}
	
cout<<"Sum = "<< sum;
return 0;
}
