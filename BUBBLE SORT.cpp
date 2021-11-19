#include <iostream>
#include <cmath>

#include <iomanip>

using namespace std;
void bubbleSort(int *input, int size)
{

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




// bubble sort using classes and objects 



#include <iostream>
using namespace std;

class BubbleSort {
public:
    void bubble(int arr[], int size);
    void driver();
    void display();
    int arr[50];
    int array_size;
    int temp;

};

void BubbleSort::driver() {
    cout<<"Enter size of list:" << endl;
    cin>>array_size;
    cout<<"Enter " << array_size << " values" << endl;
    cout << endl;
    for(int b = 0; b <= array_size -1; b++) {
        cout << "Value [" << b << "]:";
        cin>>arr[b];
     }
     cout << "Elements of your unsorted list: [ ";
    for(int c = 0; c <= array_size -1; c++){
        cout << arr[c] << " " ;
    }
        cout << "]" << endl;
        display();
}



void BubbleSort::bubble(int arr[], int array_size) {
    for (int k = 0; k < array_size; k++)
        for (int i = 0; i < array_size -k -1; i++)
            if (arr[i] > arr[i +1]){
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
      }
}

void BubbleSort::display() {

    bubble(arr,array_size);
        cout << "Elements of your sorted list: [ ";
        for(int x = 0; x < array_size; x++) {
            cout << arr[x] << " ";
        }
        cout << "]";
}

int main () {
    BubbleSort obj;
    obj.driver();
    return 0;
}




