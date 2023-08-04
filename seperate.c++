#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 5, -3, 9, -6, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            int temp = arr[i];

            for (int j = (i - 1); j >= counter; j--)

            {
                arr[j + 1] = arr[j];
            }

            arr[counter] = temp;

            counter++;
        }
    }

    cout << "This is the new array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}