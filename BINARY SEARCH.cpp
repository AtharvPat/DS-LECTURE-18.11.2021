#include <iostream>
#include <cmath>

#include <iomanip>

using namespace std;
int binarySearch(int *input, int n, int val)
{
	int start = 0;
	int end = n-1;
	int a = -1;

	for (int i = 0; i < n; i++)
	{
		int mid = (start + end) / 2;
		if (input[mid] == val)
		{
			return mid;
			break;
		}
		else if (input[mid] < val)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return a;
}
int main()
{

	int size;
	cin >> size;
	int *input = new int[size];
    cout<<"inputs of array"endl;
	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
      cout<<"enter number of test cases to be run"endl;
	int t;
	cin >> t;

	while (t--)
	{
        cout<<"enter the value to be search"endl;
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	delete [] input;
	return 0;
}
