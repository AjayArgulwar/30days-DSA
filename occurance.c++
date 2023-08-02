#include <iostream>
using namespace std;

int main()
{
    int arr[] = {20, 20, 20, 20, 31, 31, 42, 53, 53, 65};
    int n;
    cout << "Enter the number you want to find occurance of " << endl;
    cin >> n;

    int size = sizeof(arr) / sizeof(arr[0]);

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            count++;
        }
    }

    cout << "The frequency of number " << n << " is: " << count;
}