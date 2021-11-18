#include <iostream>
#include <cmath>

#include <iomanip>

using namespace std;
int linearSearch(int *arr, int n, int x)
{
    
    for (int i = 0; i < n; i++)
    {
       if (arr[i] == x)
       {
          return i;
          break;
       } 
    }
    return -1;
}
int main()
{
    cout<<"enter the number of arrays:-"<<endl;
	int t;
	cin >> t;
    
	while (t--)
	{
		int n;
		cin >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
        cout<<"enter the value to be search:-"<<endl;
		int val;
		cin >> val;
        cout<<"final output";
		cout << linearSearch(arr, n, val) << endl;
	}
	return 0;
}
