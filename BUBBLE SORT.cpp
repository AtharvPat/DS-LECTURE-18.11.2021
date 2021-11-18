#include <iostream>
#include <cmath>

#include <iomanip>

using namespace std;
void bubbleSort(int *input, int size)
{
	int end = size;

	for (int i = 0; i < size - 2; i++)
	{
		for (int j = 1, a = 0; j < size; j++, a++)
		{
			if (input[a] > input[j])
			{
				int temp = input[a];
				input[a] = input[j];
				input[j] = temp;
			}
			
		}
		end--;
	}
}
int main()
{
cout<<"enter the number of arrays:-"<<endl;
	int t;
	cin >> t;

	while (t--)
	{
        cout<<"enter the size of the array:-"<<endl;
		int size;
		cin >> size;

		int *input = new int[size];
        cout<<"enter the values of the array:-"<<endl;

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		bubbleSort(input, size);
cout<<"sorted array:-"<<endl;
		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}
