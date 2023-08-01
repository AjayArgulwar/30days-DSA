#include <iostream>
#include <algorithm>
using namespace std;

int largest(int n, int arr[], int k)
{

    sort(arr, arr + n);

    return arr[n - k];
}

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of k" << endl;
    cin >> k;

    if (k <= 0 || k > n)
    {
        cout << "Invalid Index" << endl;
    }
    else
    {
        cout << "The largest element at "<< k <<" is"<< largest(n, arr, k) << endl;
    }

    largest(n, arr, k);
}